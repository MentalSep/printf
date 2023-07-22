#include "main.h"

/**
 * non_printable -
 *
 */
void non_printable(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
			_putchar(str[i], count);
		else
		{
			str[i] > 16 ?  _puts("\\x", count) : _puts("\\x0", count);
			hex_helper(str[i], "0123456789ABCDEF", count);
		}
	}
}
