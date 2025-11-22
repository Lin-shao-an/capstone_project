#ifndef UTIL_H
#define UTIL_H

#include <stdarg.h>

typedef char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;

typedef unsigned char bool;

#define true 1
#define false 0

#define NULL 0

typedef uint32_t size_t;

extern void csr_serial_write_io(char c);
// extern char csr_serial_read_io();
// extern void csr_serial_write_flags(char c);
// extern char csr_serial_read_flags();

#define SOFTSERIAL_FLAGS_CLEAR 0
#define SOFTSERIAL_FLAGS_WAITING 1

void serial_putc(char c);

void printf(char *format, ...);

#endif