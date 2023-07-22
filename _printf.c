#include "main.h"

/**
 * valid_spec - checks if character is a format specifier
 *
 * @c: character to check
 *
 * Return: 1 if character matches a specifier, 0 otherwise
 */
int valid_spec(char c)
{
	char *s = "%csdibuoxXSprR";
	int i;

	for (i = 0; s[i]; i++)
		if (c == s[i])
			return (1);

	return (0);
}

/**
 * _printf - produces output according to a format
 *
 * @format: charcter string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;
	spec_t types[] = {
		{'c', print_char}, {'s', print_string},
		{'%', print_percent}, {'d', print_int},
		{'i', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal},
		{'x', print_lHex}, {'X', print_uHex},
		{'S', non_printable}, {'p', print_address},
		{'r', print_reverse}, {'R', print_rot13},
		{0, NULL}
	};

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && valid_spec(format[i + 1]))
		{
			i++;
			for (j = 0; types[j].specifier; j++)
				if (format[i] == types[j].specifier)
					types[j].f(args, &count);
		}
		else
			_putchar(format[i], &count);
	}
	_putchar(FLUSH_TRIGGER, &count);
	return (count);
}
