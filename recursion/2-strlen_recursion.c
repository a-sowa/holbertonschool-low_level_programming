#include "main.h"

/**
 * _strlen_recursion - returns recursively the length of a string
 * @s: input string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
