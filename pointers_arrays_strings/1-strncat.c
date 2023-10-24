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
 * _strncat - concatenates two strings
 * @dest: buffer
 * @src: string to concatenate
 * @n: size
 * Return: buffer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
