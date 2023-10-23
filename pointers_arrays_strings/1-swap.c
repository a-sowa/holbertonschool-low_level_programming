#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input pointer to swap
 * @b: input pointer to swap
 */

void swap_int(int *a, int *b)
{
	int a_value = *a;

	*a = *b;
	*b = a_value;
}
