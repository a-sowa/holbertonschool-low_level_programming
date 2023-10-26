#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: input string
 * @b: input byte
 * @n: bytes limit
 * Return: sting length
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
