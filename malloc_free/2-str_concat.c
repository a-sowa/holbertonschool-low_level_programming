#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concatenated strings or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, len;
	char *full_string;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j;

	full_string = malloc((sizeof(char) * len) + 1);
	if (full_string == 0)
		return ('\0');

	j = 0;
	while (k < len)
	{
		if (k <= i)
			full_string[k] = s1[k];
		if (k >= i)
		{
			full_string[k] = s2[j];
			j++;
		}
		k++;
	}
	full_string[k] = '\0';
	return (full_string);
}
