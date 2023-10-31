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
