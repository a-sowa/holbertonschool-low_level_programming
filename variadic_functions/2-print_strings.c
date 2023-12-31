#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(args, char *);
			if (string == NULL)
			{
				printf("%s", "(nil)");
			}
			else
			{
				printf("%s", string);
			}
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
