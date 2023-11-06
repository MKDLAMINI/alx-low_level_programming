#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This function will initialize struct dog
 * @d: ptr to struct dog
 * @name: The name will be initialized
 * @age: The age will be initialized
 * @owner: The owner will be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->owner = owner;
	d->name = name;
	d->age = age;
}
