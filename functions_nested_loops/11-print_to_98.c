#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * print_to_98 func: prints all natural numbers from n to 98
 * @n: input number
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	} else if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	} else
		printf("%d\n", n);
}
