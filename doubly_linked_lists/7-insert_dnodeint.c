#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: Index of the new node.
 * @n: Value of the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *head;
	unsigned int i;

	newNode = NULL;

	if (idx == 0)
		newNode = add_dnodeint(h, n);
	else
	{
		head = *h;

		for (i = 1; head != NULL && i < idx; i++)
			head = head->next;

		if (head != NULL)
		{
			newNode = malloc(sizeof(dlistint_t));

			if (newNode != NULL)
			{
				newNode->n = n;

				if (head->next == NULL)
					newNode = add_dnodeint_end(h, n);
				else
				{
					newNode->next = head->next;
					newNode->prev = head;
					head->next->prev = newNode;
					head->next = newNode;
				}
			}
		}
	}
	return (newNode);
}
