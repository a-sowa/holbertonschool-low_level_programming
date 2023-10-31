#include "main.h"

/**
 * _strcpy - string copier
 * @dest: buffer
 * @src: string to copy
 * Return: buffer
 */

char *_strcpy(char *dest, char *src)
{
	char *final_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (final_dest);
}
