#include "main.h"

/**
 * print_reverse - Print a string in reverse.
 *
 * @args: A va_list of arguments.
 * @count: A pointer to an integer to keep track of
 *		the number of characters printed.
 */
void print_reverse(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (!s)
		return;
	while (s[i])
		i++;

	while (i)
		_putchar(s[--i], count);
}
