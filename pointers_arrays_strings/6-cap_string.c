#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input strin
 * Return: sting length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * cap_string - apitalizes all words of a string.
 * @str: string to capitalize
 * Return: string capitalized
 */

char *cap_string(char *str)
{
	int a = 0, i;
	char b[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int len = _strlen(b);

	while (str[a])
	{
		i = 0;

		while (i < len)
		{
			if ((a == 0 || str[a - 1] == b[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;
			i++;
		}
		a++;
	}

	return (str);
}
