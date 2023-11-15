#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - string copier
 * @dest: buffer
 * @src: string to copy
 * Return: buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * new_dog - Func that creates new dog using structure
  * @name: Dog's name
  * @age: Dog's age
  * @owner: Dog's owner
  * Return: New dog's attributes
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = 0, len_own;
	dog_t *poppy;

	if (name != NULL && owner != NULL)
	{
		len_name = _strlen(name) + 1;
		len_own = _strlen(owner) + 1;
		poppy = malloc(sizeof(dog_t));

		if (poppy == NULL)
		{
			return (NULL);
		}

		poppy->name = malloc(sizeof(char) * len_name);

		if (poppy->name == NULL)
		{
			free(poppy);
			return (NULL);
		}

		poppy->owner = malloc(sizeof(char) * len_own);

		if (poppy->owner == NULL)
		{
			free(poppy->name);
			free(poppy);
			return (NULL);
		}

		poppy->name = _strcpy(poppy->name, name);
		poppy->owner = _strcpy(poppy->owner, owner);
		poppy->age = age;
	}
	return (poppy);
}
