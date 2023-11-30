#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a double linked list
 * @head: A pointer to the head of the list
 * @n: Node to be added
 * Return: The address of the new element or NULL if an error occurs
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	a = *head;

	if (a != NULL)
	{
		while (a->next != NULL)
		{
			a = a->next;
		}
		a->next = newNode;
	}

	else
	{
		*head = newNode;
	}
	newNode->prev = a;

	return (newNode);
}
