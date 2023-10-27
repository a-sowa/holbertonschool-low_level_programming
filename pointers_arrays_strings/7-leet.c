#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: string encoded into 1337
 */

char *leet(char *str)
{
	int i = 0, j;
	int len = 5;
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char encode[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;
		while (j < len)
		{
			if (str[i] == letters[j] || str[i] - 32 == letters[j])
				str[i] = encode[j];
			j++;
		}
		i++;
	}
	return (str);
}
