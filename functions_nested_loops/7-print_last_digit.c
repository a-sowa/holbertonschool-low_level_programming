#include "main.h"

/**
 * _abs - Entry point
 * _abs func: return absolute value of input number
 * @n: input number
 * Return: abolute value (Success)
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = (-1) * n;
	_putchar(n + '0');

	return (n);
}
