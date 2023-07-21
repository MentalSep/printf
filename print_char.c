#include "main.h"

/**
 * print_char - prints a character
 *
 * @args: charcter to print
 * @count: number of characters
 */
void print_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c, count);
}
