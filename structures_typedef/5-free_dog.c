#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Func that frees structure's instance
 * @d: instace to free
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
