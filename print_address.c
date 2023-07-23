#include "main.h"

/**
 * print_address - a fonction that prints the memory address
 *			in hexadecimal format
 *
 * @args: A va_list of arguments
 * @count: number of characters printed
 */
void print_address(va_list args, int *count)
{
	unsigned long int address = (unsigned long int)va_arg(args, void *);

	if (!address)
	{
		_puts("(nil)", count);
		return;
	}
	_puts("0x", count);
	hex_helper(address, "0123456789abcdef", count);
}
