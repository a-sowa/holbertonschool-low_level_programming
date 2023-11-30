#include "lists.h"

/**
 * free_list - Frees a list
 * @head: A pointer to the list to free
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (; head != NULL; head = tmp)
	{
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
