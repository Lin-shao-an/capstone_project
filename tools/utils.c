#include "utils.h"
#include <math.h>

void printf(char *format, ...) {
    char *idx;

    bool is_special_code = false;
    bool zero_padding_checked = false;
    bool is_zero_padded = false;
    bool is_left_aligned = false;
    bool is_float_format = false;
    uint8_t field_width = 0;
    uint8_t precision = 0;

    uint8_t arg_char_counter = 0;

    va_list ap;
    va_start(ap, format);

    for (idx = format; *idx != '\0'; idx++) {
        if (is_special_code) {

            if (*idx == '-') {
                // Handle left alignment
                is_left_aligned = true;
                continue;
            }

            if (*idx == '0' && !zero_padding_checked) {
                // Handle zero-padding
                is_zero_padded = true;
                zero_padding_checked = true;
                continue;
            }

            if (*idx >= '0' && *idx <= '9') {
                // Handle the width
                if (!is_float_format) {
                    field_width = field_width * 10 + (*idx - '0');
                }
                else {
                    precision = precision * 10 + (*idx - '0');
                }
                zero_padding_checked = true;
                continue;
            }

            if (*idx == '.') {
                is_float_format = true;
                continue;
            }

            if (*idx != 'c' && *idx != 'C') { arg_char_counter = 0; }
            if (*idx == 'x' || *idx == 'X') {
                // Treat *arg as a hex number
                uint32_t arg_val = va_arg(ap, uint32_t);
                bool has_seen_nonzero = false;
                uint32_t counter = 8; // Max length
                char hex_str[8];      // Hex string for the number
                uint8_t hex_idx = 0;
                while (counter > 0) {
                    int cur_digit = ((arg_val & 0xF0000000) >> 28);
                    if (cur_digit != 0) has_seen_nonzero = true;

                    if ((!(cur_digit == 0 && !has_seen_nonzero))) {
                        if (cur_digit < 0x0A) {
                            // Numeric
                            // serial_putc(cur_digit + 0x30);
                            hex_str[hex_idx++] = (cur_digit + 0x30);
                        }
                        else {
                            // Alpha
                            // serial_putc(cur_digit + 0x41 - 0x0A);
                            if (*idx == 'X') {
                                hex_str[hex_idx++] = (cur_digit + 0x41 - 0x0A);
                            }
                            else {
                                hex_str[hex_idx++] = (cur_digit + 0x41 - 0x0A - 'A' + 'a');
                            }
                        }
                    }

                    arg_val = arg_val << 4;
                    counter--;
                }

                if (hex_idx == 0) {
                    // Thing to print was 0 and we didn't enable preleading zeroes
                    // So just print a 0 and move on
                    // serial_putc('0');
                    hex_str[hex_idx++] = '0';
                }

                int i;
                if (field_width && !is_left_aligned) {
                    for (i = field_width - 1; i >= hex_idx; i--) {
                        if (is_zero_padded) {
                            serial_putc('0');
                        }
                        else {
                            serial_putc(' ');
                        }
                    }
                }
                for (i = 0; i < hex_idx; i++) {
                    serial_putc(hex_str[i]);
                }
                if (field_width && is_left_aligned) {
                    for (i = field_width - 1; i >= hex_idx; i--) {
                        serial_putc(' ');
                    }
                }

                // Move to next argument and reset per-specifier flags
                is_special_code = false;
                zero_padding_checked = false;
                is_zero_padded = false;
                is_left_aligned = false;
                is_float_format = false;
                field_width = 0;
                precision = 0;
                arg_char_counter = 0;
                continue;
            }
            else if (*idx == 's' || *idx == 'S') {
                // Print string
                char *cursor = va_arg(ap, char*);
                while (*cursor) {
                    serial_putc(*cursor);
                    cursor++;
                }

                is_special_code = false;
                zero_padding_checked = false;
                is_zero_padded = false;
                is_left_aligned = false;
                is_float_format = false;
                field_width = 0;
                precision = 0;
                arg_char_counter = 0;
                continue;
            }
            else if (*idx == 'c' || *idx == 'C') {
                // Print char
                char cur_val = va_arg(ap, int);
                serial_putc(cur_val);

                is_special_code = false;
                zero_padding_checked = false;
                is_zero_padded = false;
                is_left_aligned = false;
                is_float_format = false;
                field_width = 0;
                precision = 0;
                arg_char_counter = 0;
                continue;
            }
            else if (*idx == 'd' || *idx == 'D') {
                // Treat *arg as a decimal integer
                int32_t arg_val = va_arg(ap, int);
                bool is_neg = false;
                if (arg_val < 0) {
                    // Print the negative sign
                    is_neg = true;
                    arg_val = -arg_val; // Make it positive for printing
                }
                // Convert integer to string and print
                char num_str[11]; // Max 10 digits for 32-bit int + 1 for null terminator
                uint8_t num_idx = 0;
                
                if (arg_val == 0) {
                    num_str[num_idx++] = '0'; // Handle zero
                }
                else {
                    if (arg_val < 0) {
                        // Handle INT32_MIN case
                        num_str[num_idx++] = '8';
                        arg_val = 214748364; // INT32_MIN is -2147483648
                    }
                    while (arg_val > 0) {
                        num_str[num_idx++] = (arg_val % 10) + '0';
                        arg_val /= 10;
                    }
                }
                
                // Print digits in reverse order
                int i;
                if (is_neg && is_zero_padded) {
                    serial_putc('-');
                }
                if (field_width && !is_left_aligned) {
                    for (i = field_width - 1 - is_neg; i >= num_idx; i--) {
                        if (is_zero_padded) {
                            serial_putc('0');
                        }
                        else {
                            serial_putc(' ');
                        }
                    }
                }
                if (is_neg && !is_zero_padded) {
                    serial_putc('-');
                }
                for (i = num_idx - 1; i >= 0; i--) {
                    serial_putc(num_str[i]);
                }
                if (field_width && is_left_aligned) {
                    for (i = field_width - 1 - is_neg; i >= num_idx; i--) {
                        serial_putc(' ');
                    }
                }

                is_special_code = false;
                zero_padding_checked = false;
                is_zero_padded = false;
                is_left_aligned = false;
                is_float_format = false;
                field_width = 0;
                precision = 0;
                arg_char_counter = 0;
                continue;
            }
            else if (*idx == 'f' || *idx == 'F') {
                float arg_val = (float)va_arg(ap, double);

                if (!is_float_format) {
                    precision = 6; // Default precision
                }

                bool neg = false;
                if (arg_val < 0.0f) {
                    neg = true;
                    arg_val = -arg_val;
                }

                char integer_part[39];
                int fractional_part[150]; // At most 150 digits for fractional part
                int i, j;

                for (i = 0; i < 39; i++) {
                    integer_part[i] = 0;
                }
                for (i = 0; i < 150; i++) {
                    fractional_part[i] = 0;
                }

                // Integer part
                int int_idx = 0;
                uint32_t int_val = (uint32_t)arg_val;
                if (int_val == 0) {
                    integer_part[int_idx++] = 0;
                }
                else {
                    while (int_val > 0 && int_idx < 39) {
                        integer_part[int_idx++] = (int_val % 10);
                        int_val /= 10;
                    }
                }

                if (precision > 149) {
                    precision = 149;
                }

                // Fractional part
                float frac = arg_val - (float)((uint32_t)arg_val);
                for (i = 0; i <= precision; i++) {
                    frac *= 10.0f;
                    fractional_part[i] = (int)frac;
                    frac -= (int)frac;
                }

                // Rounding
                if (precision > 0) {
                    if (fractional_part[precision] >= 5) {
                        int carry = 1;
                        for (i = precision - 1; i >= 0 && carry; i--) {
                            int temp = fractional_part[i] + carry;
                            fractional_part[i] = temp % 10;
                            carry = temp / 10;
                        }
                        for (i = 0; carry; i++) {
                            int temp = integer_part[i] + carry;
                            integer_part[i] = temp % 10;
                            carry = temp / 10;
                        }
                    }
                }

                int int_digit = int_idx - 1;
                while (int_digit > 0 && integer_part[int_digit] == 0) int_digit--;

                if (neg && is_zero_padded) {
                    serial_putc('-');
                }
                if (field_width && !is_left_aligned) {
                    for (i = 0; i < field_width - (int_digit + 1 + (precision > 0 ? (precision + 1) : 0) + neg); i++) {
                        if (is_zero_padded) {
                            serial_putc('0');
                        }
                        else {
                            serial_putc(' ');
                        }
                    }
                }
                if (neg && !is_zero_padded) {
                    serial_putc('-');
                }

                for (i = int_digit; i >= 0; i--) {
                    serial_putc(integer_part[i] + '0');
                }

                if (precision > 0) {
                    serial_putc('.');
                    for (i = 0; i < precision; i++) {
                        int digit = fractional_part[i] % 10;
                        if (digit < 0) digit = 0;
                        serial_putc(digit + '0');
                    }
                }

                if (field_width && is_left_aligned) {
                    for (i = 0; i < field_width - (int_digit + 1 + (precision > 0 ? (precision + 1) : 0) + neg); i++) {
                        serial_putc(' ');
                    }
                }

                is_special_code = false;
                zero_padding_checked = false;
                is_zero_padded = false;
                is_left_aligned = false;
                is_float_format = false;
                field_width = 0;
                precision = 0;
                arg_char_counter = 0;
                continue;
            }
            else {
                // Couldn't handle this argument type,
                // Move to next argument:
                is_special_code = false;
                va_arg(ap, uint32_t);
                continue;
            }
        }

        if (*idx == '%') {
            is_special_code = true;
            continue;
        }

        serial_putc(*idx);
    }

    va_end(ap);
}

void serial_putc(char c) {
    csr_serial_write_io(c);
}