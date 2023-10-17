#include "main.h"

/**
 * _islower - Entry point
 * _islower func: Return 1 if parameter c is lower and 0 if is upper
 * @c: input character
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
