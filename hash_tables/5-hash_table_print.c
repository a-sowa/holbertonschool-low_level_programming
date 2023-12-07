#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table.
  * @ht: The hash table to print.
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	short comma = 0;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", comma ? ", " : "",
			(char *)node->key, (char *)node->value);

			comma = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
