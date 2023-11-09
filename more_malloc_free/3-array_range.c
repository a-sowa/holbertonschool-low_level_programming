#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: NULL or string
 */
int *array_range(int min, int max)
{
	int i, *s, size;

	if (min > max)
		return ('\0');
	size = max - min + 1;
	s = malloc(sizeof(int) * size);
	if (s == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
