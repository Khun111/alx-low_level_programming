#include "dog.h"
/**
 * free_dog - remember to free
 * @d: struct pointer to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
