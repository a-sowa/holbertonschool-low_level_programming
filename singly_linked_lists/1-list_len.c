#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: The provided list
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		numberOfElements++;
		h = h->next;
	}
	return (numberOfElements);
}
