#include <stdio.h>

/**
 * main - Entry point
 * Main function: prints alphabet in lowercase
 * and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}

	while (CH <= 'Z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');

	return (0);
}
