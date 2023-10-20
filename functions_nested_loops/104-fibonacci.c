#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints first 98 Fibonnaci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 98, i;
	unsigned long a = 1, b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= n; i++)
	{
		unsigned long c = a + b;

		if (i < n)
		{
			printf("%lu, ", c);
		} else
		{
			printf("%lu\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
