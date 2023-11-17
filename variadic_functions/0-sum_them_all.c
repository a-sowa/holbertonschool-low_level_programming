#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of integers passed to the function
 * Return: result or 0  if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
