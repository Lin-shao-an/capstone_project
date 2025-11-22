#include "utils.h"

void printf(char *format, ...) {
    char *idx;

    bool is_special_code = false;
    bool should_print_preleading_zeroes = false;
    bool printed_anything = false;

    uint8_t arg_char_counter = 0;

    va_list ap;
    va_start(ap, format);

    for (idx = format; *idx != NULL; idx++) {
        if (is_special_code) {
            if (*idx != 'c' && *idx != 'C') { arg_char_counter = 0; }
            if (*idx == 'x' || *idx == 'X') {
                // Treat *arg as a hex number
                uint32_t arg_val = va_arg(ap, uint32_t);
                bool has_seen_nonzero = false;
                uint32_t counter = 8; // Max length
                while (counter > 0) {
                    int cur_digit = ((arg_val & 0xF0000000) >> 28);
                    if (cur_digit != 0) has_seen_nonzero = true;

                    if ((!(cur_digit == 0 && !has_seen_nonzero)) || should_print_preleading_zeroes) {
                        if (cur_digit < 0x0A) {
                            // Numeric
                            serial_putc(cur_digit + 0x30);
                        }
                        else {
                            // Alpha
                            serial_putc(cur_digit + 0x41 - 0x0A);
                        }
                        printed_anything = true;
                    }

                    arg_val = arg_val << 4;
                    counter--;
                }

                if (!printed_anything) {
                    // Thing to print was 0 and we didn't enable preleading zeroes
                    // So just print a 0 and move on
                    serial_putc('0');
                }

                // Move to next argument:
                is_special_code = false;
                should_print_preleading_zeroes = false;
                printed_anything = false;
                continue;
            }
            else if (*idx == '0') {
                // This means preprint the leading zeroes
                should_print_preleading_zeroes = true;

                // Not done with this argument yet so continue:
                continue;
            }
            else if (*idx == 's' || *idx == 'S') {
                // Print string
                char *cursor = va_arg(ap, char*);
                while (*cursor) {
                    serial_putc(*cursor);
                    cursor++;
                }

                should_print_preleading_zeroes = false;
                is_special_code = false;
                continue;
            }
            else if (*idx == 'c' || *idx == 'C') {
                // Print char
                char cur_val = va_arg(ap, int);
                serial_putc(cur_val);

                is_special_code = false;
                continue;
            }
            else if (*idx == 'd' || *idx == 'D') {
                // Treat *arg as a decimal integer
                int32_t arg_val = va_arg(ap, int);
                if (arg_val < 0) {
                    // Print the negative sign
                    serial_putc('-');
                    arg_val = -arg_val; // Make it positive for printing
                }
                
                // Convert integer to string and print
                char num_str[11]; // Max 10 digits for 32-bit int + 1 for null terminator
                uint8_t num_idx = 0;
                
                if (arg_val == 0) {
                    num_str[num_idx++] = '0'; // Handle zero
                } else {
                    while (arg_val > 0) {
                        num_str[num_idx++] = (arg_val % 10) + '0';
                        arg_val /= 10;
                    }
                }

                // Print digits in reverse order
                int i;
                for (i = num_idx - 1; i >= 0; i--) {
                    serial_putc(num_str[i]);
                }

                is_special_code = false;
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