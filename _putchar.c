#include "main.h"

/**
 * _putchar - prints a character
 *
 * @c: character to print
 * @count: number of characters
 */
void _putchar(char c, int *count)
{
	write(STDOUT_FILENO, &c, 1);
	*count += 1;
}
