#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * of a doubly linked list
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if succeeded, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *h1, *h2;
    unsigned int i;

    if (*head == NULL)
	{
        return -1;
	}

    h1 = *head;

    for (i = 0; h1 != NULL && i < index; i++)
    {
        h2 = h1;
        h1 = h1->next;
    }

    if (h1 == NULL)
	{
        return (-1);
	}

    if (index == 0)
	{
        *head = h1->next;
	}
    else
	{
        h2->next = h1->next;
	}

    if (h1->next != NULL)
	{
        h1->next->prev = h2;
	}

    free(h1);

    return (1);
}
