#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments pointers
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
