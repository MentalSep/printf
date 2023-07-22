#include "main.h"

/**
 * hex_helper -
 *
 */
void hex_helper(unsigned long int number, char *base, int *count)
{
	if (number / 16)
		hex_helper(number / 16, base, count);
	_putchar(base[number % 16], count);
}

/**
 * print_lhex -
 *
 */
void print_lHex(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	char *base = "0123456789abcdef";

	hex_helper(n, base, count);
}

/**
 * print_uHex -
 *
 */
void print_uHex(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	char *base = "0123456789ABCDEF";

	hex_helper(n, base, count);
}
