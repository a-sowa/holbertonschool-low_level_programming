#include "main.h"

/**
 * _abs - Entry point
 * _abs func: return absolute value of input number
 * @n: input number
 * Return: abolute value (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
