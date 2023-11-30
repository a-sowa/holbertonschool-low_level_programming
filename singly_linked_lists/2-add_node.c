#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: A pointer to the head of the list
 * @str: The string to be added to the list
 * Return: The address of the new element or NULL if an error occurs
 */

list_t *add_node(list_t **head, const char *str)
{
	int index = 0;
	char *duplicate;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[index])
	{
		index++;
	}

	newNode->str = duplicate;
	newNode->len = index;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
