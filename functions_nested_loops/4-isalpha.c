#include "main.h"

/**
 * _isalpha - Entry point
 * _isalpha func: Return 1 if parameter c is alpha character
 * @c: input character
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	return ((c <= 122 && c >= 97) || (c <= 90 && c >= 65));
}
