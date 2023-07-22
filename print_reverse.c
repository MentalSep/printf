#include "main.h"

/**
 * print_reverse -
 *
 */
void print_reverse(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (!s)
	{
		_puts("(null)", count);
		return;
	}
	while (s[i])
		i++;

	while (i)
		_putchar(s[--i], count);
}
