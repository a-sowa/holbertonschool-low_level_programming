#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints all combinations of two two-digits numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)
			{
				int i_nb1 = i / 10;
				int i_nb2 = i % 10;
				int j_nb1 = j / 10;
				int j_nb2 = j % 10;

				putchar('0' + i_nb1);
				putchar('0' + i_nb2);

				putchar(' ');

				putchar('0' + j_nb1);
				putchar('0' + j_nb2);

				if (i == 98 && j == 99)
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

