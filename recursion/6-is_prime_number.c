#include "main.h"

/**
 * is_prime_checker - recursive func that checks if a number is prime or not
 * @n: the number to check
 * @divisor: the number checking the divisibility of n
 * Return: 1 if it's a prime number, 0 if not.
 */

int is_prime_checker(int n, int divisor)
{
	if (divisor <= 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_checker(n, divisor - 1));
}

/**
 * is_prime_number - func that returns if a number is prime or not
 * @n: input number
 * Return: 1 if it's a prime number, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_checker(n, n - 1));
}
