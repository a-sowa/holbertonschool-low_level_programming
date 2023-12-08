#include "hash_tables.h"

/**
  * hash_table_set - Adds an element to the hash table.
  * @ht: The hash table looked for.
  * @key: The key looked for.
  * @value: The value associated with the key
  * Return: 1 if it succeeded, 0 otherwise.
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *e = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
	{
		return (0);
	}

	i = key_index((unsigned char *) key, ht->size);
	e = ht->array[i];

	if (e && strcmp(key, e->key) == 0)
	{
		free(e->value);
		e->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
