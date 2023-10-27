#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @src: source memory area
 * @dest: destination memory area
 * @n: bytes to copy
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
