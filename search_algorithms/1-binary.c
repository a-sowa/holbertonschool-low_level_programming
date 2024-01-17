#include "search_algos.h"

/**
 * binary_search - Binary search algorithm to find the index
 * of a value in a sorted array.
 * @array: A pointer to the first element of the sorted array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index of the value if found; otherwise, -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		int i;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] > value)
		{
			right = mid - 1;
		} else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
