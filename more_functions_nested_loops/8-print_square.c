#include "main.h"

/**
 * print_square - Entry point
 * print_square func: prints a square according to the number given
 * @size: input size of square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		if (size < 2)
		{
			_putchar('#');
			_putchar('\n');
		} else
		{
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
					_putchar('#');
				_putchar('\n');
			}
		}
	} else
		_putchar('\n');
}
