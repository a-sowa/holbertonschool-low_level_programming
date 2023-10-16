#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints alphabet in lowercase
 * except letter q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	ch++;
	}
	putchar('\n');

	return (0);
}
