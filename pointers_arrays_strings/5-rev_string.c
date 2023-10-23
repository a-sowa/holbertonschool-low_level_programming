#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse string
 * @s: input string
 */

void rev_string(char *s)
{
	char *end = s;

	while (*end != '\0')
		end++;
	end--;

	while (s < end)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
