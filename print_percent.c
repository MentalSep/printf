#include "main.h"

/**
 * print_percent - prints the percent character
 *
 * @args: list of args
 * @count: number of characters
 */
void print_percent(va_list args, int *count)
{
	(void)(args);
	_putchar('%', count);
}
