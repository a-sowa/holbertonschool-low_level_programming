#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints reverse alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');

	return (0);
}
