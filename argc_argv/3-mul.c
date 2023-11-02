#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments pointers
 * Return: 0 (success) - 1 (error)
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
