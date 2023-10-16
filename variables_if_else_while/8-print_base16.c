#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints all the numbers of base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int nb = 0;

	while (nb < 10)
	{
	putchar('0' + nb);
	nb++;
	}

	while (ch <= 'f')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');

	return (0);
}
