#include "main.h"

/**
 * unsigned_helper - Helper function to print an unsigned integer.
 *
 * @number: The unsigned integer to be printed.
 * @count: A pointer to an integer to keep track of
 *		the number of characters printed.
 */
void unsigned_helper(unsigned int number, int *count)
{
	if (number / 10)
		unsigned_helper(number / 10, count);
	_putchar(number % 10 + '0', count);
}

/**
 * print_unsigned - Print an unsigned integer.
 *
 * @args: A va_list of arguments.
 * @count: A pointer to an integer to keep track of
 *		the number of characters printed.
 */
void print_unsigned(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	unsigned_helper(n, count);
}
