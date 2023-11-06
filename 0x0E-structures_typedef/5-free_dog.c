#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This function frees all the dogs
 * @d: This is the value that needs to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
