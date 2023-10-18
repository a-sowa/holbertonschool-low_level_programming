#include "main.h"

/**
 * print_diagonal - Entry point
 * print_diagonal func: prints a diagonal according to the number given
 * @n: input number
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		if (n < 2)
		{
			_putchar('\\');
			_putchar('\n');
		} else
		{
			for (i = 0; i < n; i++)
				if (i < 1)
				{
					_putchar('\\');
					_putchar('\n');
				} else
				{
					for (j = 0; j <= i - 1; j++)
						_putchar(' ');
					_putchar('\\');
					_putchar('\n');
				}
		}
	} else
		_putchar('\n');
}
