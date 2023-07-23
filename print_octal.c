#include "main.h"


/**
 * octal_helper - Helper function to print an unsigned integer
 * 			in octal format.
 *
 * @number: The unsigned integer to be printed in octal format.
 * @count: A pointer to an integer to keep track of
 *		the number of characters printed.
 */
void octal_helper(unsigned int number, int *count)
{
	if (number / 8)
		octal_helper(number / 8, count);
	_putchar(number % 8 + '0', count);
}

/**
 * print_octal - Print an unsigned integer in octal format.
 *
 * @args: A va_list of arguments.
 * @count: A pointer to an integer to keep track of
 *		the number of characters printed.
 */
void print_octal(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	octal_helper(n, count);
}
