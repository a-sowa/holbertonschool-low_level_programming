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

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
