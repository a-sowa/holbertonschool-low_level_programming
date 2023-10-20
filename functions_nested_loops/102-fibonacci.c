#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints first 50 Fibonnaci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 50, i;
	long a = 1, b = 2;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= n; i++)
	{
		long c = a + b;

		if (i < n)
		{
			printf("%ld, ", c);
		} else
		{
			printf("%ld\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
