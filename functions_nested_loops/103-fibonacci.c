#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints prints the sum of the Fibonacci
 * even-valued terms below 4000000
 * Return: Always 0 (Success)
 */

int main(void)
{
	long a = 1, b = 2, c = 2, sum = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			sum += c;

		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
