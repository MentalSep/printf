#include "main.h"

/**
 * puts -
 *
 */
void _puts(char *s, int *count)
{
	if (!s)
		s = "(null)";
	while (*s)
		_putchar(*s++, count);
}
/**
 * _putchar - prints a character
 *
 * @c: character to print
 * @count: number of characters
 */
void _putchar(char c, int *count)
{
	static int i;
	static char StBuff[BUFFER_SIZE];

	if (i == BUFFER_SIZE || c == FLUSH_TRIGGER)
	{
		*count += i;
		write(STDOUT_FILENO, StBuff, i);
		i = 0;
	}
	else
		StBuff[i++] = c;
}
