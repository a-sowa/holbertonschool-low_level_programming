#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key.
  * @ht: The hash table to look into.
  * @key: The key to find.
  * Return: The value associated with the element
  * or NULL if a key couldn't be found.
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	element = ht->array[index];
	if (element == NULL)
	{
		return (NULL);
	}
	while (strcmp(key, element->key) != 0)
	{
		element = element->next;
	}
	return (element->value);
}
