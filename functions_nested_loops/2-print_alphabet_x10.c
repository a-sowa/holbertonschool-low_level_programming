#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * print_alphabet_x10 func: Prints alphabet in lowercase 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 1;

	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
		_putchar('\n');
	}
}
