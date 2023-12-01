#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit.
 * Return: 1 if it worked, -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
