#include "main.h"

/**
 * print_last_digit - Entry point
 * print_last_digit func: return last digit of entered number
 * @n: input number
 * Return: last digit (Success)
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = (-1) * n;
	_putchar(n + '0');

	return (n);
}
