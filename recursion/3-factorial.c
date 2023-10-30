#include "main.h"

/**
 * factorial - recursive func that returns the factorial of a given number
 * @n: input number
 * Return: factorial of input number OR -1 if n is lower than 0 as an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
