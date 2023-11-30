#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a double linked list
 * @head: A pointer to the head of the list
 * @n: Node to be added
 * Return: The address of the new element or NULL if an error occurs
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	a = *head;

	if (a != NULL)
	{
		while (a->prev != NULL)
		{
			a = a->prev;
		}
	}

	newNode->next = a;

	if (a != NULL)
	{
		a->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
