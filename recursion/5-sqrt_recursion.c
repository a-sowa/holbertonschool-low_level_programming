#include "main.h"

/**
 * find_sqrt - recursive func that calculates the square root of a given number
 * @a: the number whose square root is to be found
 * @b: the multiplier to find the square root
 * Return: the square root OR -1 as an error
 */


int find_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (find_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - func that returns the square root of a given number
 * @n: input number
 * Return: square root of input number
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
