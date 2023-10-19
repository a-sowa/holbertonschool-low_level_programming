#include "main.h"

/**
 * print_triangle - Entry point
 * print_triangle func: prints a triangle according to the number given
 * @size: input size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		if (size < 2)
		{
			_putchar('#');
			_putchar('\n');
		} else
		{
			for (i = 1; i <= size; i++)
			{
				for (j = 0; j < size - i; j++)
					_putchar(' ');
				for (k = 0; k < i; k++)
					_putchar('#');
				_putchar('\n');
			}
		}
	} else
		_putchar('\n');
}
