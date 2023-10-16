#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints integer with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb = 0;

	while (nb < 10)
	{
	putchar('0' + nb);
		if (nb == 9)
		{
			break;
		}
	putchar(',');
	putchar(' ');
	nb++;
	}
	putchar('\n');

	return (0);
}
