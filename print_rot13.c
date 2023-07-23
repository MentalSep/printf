#include "main.h"


/**
 * print_rot13 - Print a string using the ROT13 cipher.
 *
 * @args: A va_list of arguments.
 * @count: A pointer to an integer to keep track of
 *		the number of characters printed.
 */
void print_rot13(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
		return;

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
