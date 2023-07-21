#include "main.h"

/**
 * binary_helper - prints binary representation of a number
 *
 * @n: number to print
 * @count: number of integers
 */
void binary_helper(unsigned int n, int *count)
{
	if (n > 1)
		binary_helper(n / 2, count);
	_putchar(n % 2 + '0', count);
}
/**
 * print_binary - prints binary representation of a number
 *
 * @args: number to print
 * @count: number of integers
 */
void print_binary(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);

	binary_helper(n, count);
}
