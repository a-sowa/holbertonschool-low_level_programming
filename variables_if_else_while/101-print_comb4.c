#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints all combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb1 = 0;
	int nb2 = 1;
	int nb3 = 2;
	int i;

	for (i = 0; i < 999; i++)
	{
		while (nb1 < nb2 && nb2 < 10)
		{
			while (nb2 < nb3 && nb3 < 10)
			{
				putchar('0' + nb1);
				putchar('0' + nb2);
				putchar('0' + nb3++);

				if (nb1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			nb2++;
			nb3 = nb2 + 1;
		}
		nb1++;
		nb2 = nb1 + 1;
		nb3 = nb2 + 1;
	}
	putchar('\n');

	return (0);
}
