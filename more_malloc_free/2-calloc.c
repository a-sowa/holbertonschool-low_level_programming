#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: nb of elements in array
 * @size: size of element
 * Return: NULL or string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
