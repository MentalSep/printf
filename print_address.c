#include "main.h"

/**
 * print_address -
 *
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
