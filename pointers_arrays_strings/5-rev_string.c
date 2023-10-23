#include "main.h"

/**
 * rev_string - reverse string
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
