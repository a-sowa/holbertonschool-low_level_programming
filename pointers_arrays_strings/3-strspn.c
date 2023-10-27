#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: input string
  * @accept: accepted characters
  * Return: number of bytes from accepted characters in string
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, bytes_nb = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
				bytes_nb++;
			j++;
		}
		i++;

	}
	return (bytes_nb);
}
