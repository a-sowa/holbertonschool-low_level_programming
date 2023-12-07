#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to find the index
 * @index: The index, starting from 0 of the bit you want to get
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((int)((n >> index) & 1));
}