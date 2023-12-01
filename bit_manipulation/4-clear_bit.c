#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit.
 * Return: 1 if it worked, -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
