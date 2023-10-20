#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints all combination of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb1 = 0;
	int nb2 = 1;
	int i;

	for (i = 0; i < 99; i++)
	{
		while (nb1 < nb2 && nb2 < 10)
		{
			putchar('0' + nb1);
			putchar('0' + nb2++);

			if (nb1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		nb1++;
		nb2 = nb1 + 1;
	}
	putchar('\n');

	return (0);
}
