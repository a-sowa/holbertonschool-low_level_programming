#include "main.h"

/**
 * print_sign - Entry point
 * print_sign func: Return 1 if parameter iss positive 0 if zero -1 if negative
 * @n: input character
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
