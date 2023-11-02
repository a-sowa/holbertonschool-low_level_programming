#include "main.h"
#include <stdio.h>

/**
 * main - Entry point - prints naame of the program
 * @argc: number of arguments
 * @argv: array of arguments pointers
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
