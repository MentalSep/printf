#include "main.h"

/**
 * int_helper - prints an integer
 *
 * @n: integer to print
 * @count: number of integers
 */
void int_helper(int n, int *count)
{
	unsigned int number = (n < 0) ? -n : n;

	if (n < 0)
		_putchar('-', count);
	if (number / 10)
		int_helper(number / 10, count);
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

	int_helper(n, count);
}
