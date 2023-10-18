#include "main.h"

/**
 * more_numbers - Entry point
 * more_numbers func: Prints numbers from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i <= 10)
	{
		for (n = 0; n <= 9; n++)
			_putchar(n + '0');

		for (n = 10; n <= 14; n++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		i++;
		_putchar('\n');
	}
}
