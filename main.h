#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>


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

#endif
