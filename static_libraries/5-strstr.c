#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring to find
 * Return: substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] !=  needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
