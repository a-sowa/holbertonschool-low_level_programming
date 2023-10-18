#include "main.h"

/**
 * times_table - Entry point
 * times_table func: prints the 9 times table starting with 0
 */

void times_table(void)
{
	int nb1, nb2;

	for (nb1 = 0; nb1 <= 9; nb1++)
	{
		for (nb2 = 0; nb2 <= 9; nb2++)
		{
			int calc = nb1 * nb2;

			if (nb1 >= 0 && nb2 >= 1 && calc < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			if (calc >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(calc / 10 + '0');
				_putchar(calc % 10 + '0');
			} else
			{
				_putchar(calc + '0');
			}
		}
		_putchar('\n');
	}
}
