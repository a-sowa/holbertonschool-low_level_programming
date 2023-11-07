#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @c: chaar to print
 * @size: the size of the memory to print
 * Return: array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[i] = '\0';

	return (array);
}
