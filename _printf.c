#include "main.h"

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
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{0, NULL}
	};

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; types[j].specifier; j++)
				if (format[i] == types[j].specifier)
					types[j].f(args, &count);
		}
		else
			_putchar(format[i], &count);
	}
	return (count);
}
