#include "main.h"

/**
 * hex_helper - a fonction that convert a number to its hexadecimal format
 *	and prints it.
 *
 * @number: number to be converted
 * @base: character of hex digits
 * @count: number of character printed
 */
void hex_helper(unsigned long int number, char *base, int *count)
{
	if (number / 16)
		hex_helper(number / 16, base, count);
	_putchar(base[number % 16], count);
}

/**
 * print_lHex - a fonction responsible for printing an unsigned integer
 *			in lowercase hexadecimal format
 *
 * @args: A va_list of arguments
 * @count: number of character printed
 */
void print_lHex(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	char *base = "0123456789abcdef";

	hex_helper(n, base, count);
}
/**
 * print_uHex - a fonction responsible for printing an unsigned integer
 *			in uppercase hexadecimal format
 * @args: A va_list of arguments.
 * @count: number of character printed
 */
void print_uHex(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	char *base = "0123456789ABCDEF";

	hex_helper(n, base, count);
}
