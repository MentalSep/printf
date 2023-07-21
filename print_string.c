#include "main.h"

/**
 * print_string - prints string
 *
 * @args: string to print
 * @count: number of characters
 */
void print_string(va_list args, int *count)
{
	char *str = va_arg(args, char*);
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i], count);
}
