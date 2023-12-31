#include "main.h"

/**
 * _pow_recursion - recursive func that returns the value of x raised
 * to the power of y
 * @x: base number
 * @y: exponent
 * Return: returns the power value OR -1 if n is lower than 0 as an error
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
