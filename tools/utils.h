#ifndef UTIL_H
#define UTIL_H

#include <stdarg.h>
#include "types.h"

extern void csr_serial_write_io(char c);
// extern char csr_serial_read_io();
// extern void csr_serial_write_flags(char c);
// extern char csr_serial_read_flags();

#define SOFTSERIAL_FLAGS_CLEAR 0
#define SOFTSERIAL_FLAGS_WAITING 1

void serial_putc(char c);

void printf(char *format, ...);

#endif