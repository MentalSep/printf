#include "main.h"

/**
 * print_rot13 -
 *
 */
void print_rot13(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
	{
		_puts("(null)", count);
		return;
	}

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			_putchar(str[i] + 13, count);
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
		(str[i] >= 'N' && str[i] <= 'Z'))
			_putchar(str[i] - 13, count);
		else
			_putchar(str[i], count);
	}
}
