#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Main function: Assign random number, prints last digit
 * and tells if greater than 5, less than 6 or equal to 0
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	printf("Last digit of");
	if (last_digit < 6 && last_digit != 0)
	{
		printf(" %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf(" %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit > 5)
	{
		printf(" %d is %d and is greater than 5\n", n, last_digit);
	}
	return (0);
}
