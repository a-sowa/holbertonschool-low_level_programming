#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: A pointer to the the head of the list to free
 */

void free_dlistint(dlistint_t *head)
{
	for (; head != NULL; head = head->next)
	{
		free(head);
	}
}
