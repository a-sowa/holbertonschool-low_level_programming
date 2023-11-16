#include "function_pointers.h"

/**
  * int_index - searches for integer
  * @array: array to iterate
  * @size: size of the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: returns the index of the first integer found
  * returns -1 if no element matches or size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
