#include "main.h"

/**
 * _strncpy - string copier strncpy
 * @dest: destination
 * @src: source
 * @n: length
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *final_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (final_dest);
}
