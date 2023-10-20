#include "main.h"

/**
 * print - print more than 1 digit number with _putchar
 * @num: input number to print with putchar
 */

void print(long num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * add_space - prints space
 * @space: number of space wanted
 */

void add_space(int space)
{
	int i;

	for (i = 0; i < space; i++)
		_putchar(' ');
}

/**
 * print_times_table - prints the n times table starting with 0
 * @n: times table to print
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 1 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				int mul = i * j;

				if (i >= 0 && j >= 1 && mul < 10)
				{
					_putchar(',');
					add_space(3);
				}

				if (mul >= 10 && mul < 100)
				{
					_putchar(',');
					add_space(2);
					print(mul);
				}

				if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
					print(mul);
				}
				if (mul < 10)
					_putchar(mul + '0');
			}
			_putchar('\n');
		}
	}
	if (n == 0)
	{
		_putchar(48);
		_putchar('\n');
	}
}
