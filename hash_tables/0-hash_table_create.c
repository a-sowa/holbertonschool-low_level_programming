#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: Size of the array
  * Return: A pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *NewTable = malloc(sizeof(hash_table_t));

	if (size == 0)
	{
		return (NULL);
	}

	if (NewTable == NULL)
	{
		return (NULL);
	}

	NewTable->size = size;
	NewTable->array = calloc(size, sizeof(*(NewTable->array)));

	if (NewTable->array == NULL)
	{
		free(NewTable);
		return (NULL);
	}

	return (NewTable);
}
