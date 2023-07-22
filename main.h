#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024
#define FLUSH_TRIGGER -1

/**
 * struct specifier - each format specifier with it's function
 *
 * @specifier: format specifer
 * @f: function pointer
 */
typedef struct specifier
{
	char specifier;
	void (*f)(va_list, int*);
} spec_t;

int _printf(const char *format, ...);
void _putchar(char c, int *count);
void print_char(va_list args, int *count);
void print_string(va_list args, int *count);
void print_percent(va_list args, int *count);
void print_int(va_list args, int *count);
void print_binary(va_list args, int *count);
void print_unsigned(va_list args, int *count);
void print_octal(va_list args, int *count);
void print_lHex(va_list args, int *count);
void print_uHex(va_list args, int *count);

#endif
