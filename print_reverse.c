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
		return;
	while (s[i])
		i++;

	while (i)
		_putchar(s[--i], count);
}
