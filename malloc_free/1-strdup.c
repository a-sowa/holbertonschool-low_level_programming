#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicates
 * Return: duplicated string or NULL
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *duplicated;

	if (str == 0)
	{
		return ('\0');
	}

	while (str[i])
	{
		i++;
	}

	duplicated = malloc((sizeof(char) * i) + 1);

	if (duplicated == 0)
	{
		return ('\0');
	}

	while (j < i)
	{
		duplicated[j] = str[j];
		j++;
	}

	duplicated[j] = '\0';

	return (duplicated);
}
