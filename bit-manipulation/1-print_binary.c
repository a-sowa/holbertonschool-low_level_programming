#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = sizeof(n) * 8 - 1;

	while (!(n & (1UL << shift)) && shift > 0)
	{
		shift--;
	}

	while (shift >= 0)
	{
		if (n & (1UL << shift))
			_putchar('1');
		else
			_putchar('0');
		shift--;
	}
}
