#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add 2 integers together
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of the operation
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract integer to another
 * @a: 1st integer
 * @b: integer to substract
 * Return: result of the operation
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers together
 * @a: 1st integer
 * @b: 2nd integer
 * Return: result of the operation
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide an integer by another
 * @a: integer to divide
 * @b: divisor
 * Return: result of the operation
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - give the modulo of the division
 * @a: 1st number
 * @b: 2nd number
 * Return: modulo of the operation
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
