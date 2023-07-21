#include "main.h"

/**
 * _helper - prints an integer
 *
 * @n: integer to print
 * @count: number of integers
 */
void _helper(int n, int *count)
{
	unsigned int number = (n < 0) ? -n : n;

	if (n < 0)
		_putchar('-', count);
	if (number / 10)
		_helper(number / 10, count);
	_putchar(number % 10 + '0', count);
}
/**
 * print_int - prints an integer
 *
 * @args: integer to print
 * @count: number of integers
 */
void print_int(va_list args, int *count)
{
	int n = va_arg(args, int);

	_helper(n, count);
}
