#include "main.h"

/**
 * octal_helper -
 *
 */
void octal_helper(unsigned int number, int *count)
{
	if (number / 8)
		octal_helper(number / 8, count);
	_putchar(number % 8 + '0', count);
}

/**
 * print_octal -
 *
 */
void print_octal(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	octal_helper(n, count);
}
