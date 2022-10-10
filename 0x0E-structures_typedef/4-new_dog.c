#include "dog.h"
#include "string.h"
/**
 * new_dog - function to create new dog
 * @name: name location gets altered
 * @age: age remains untouched
 * @owner: same for owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));

	ndog->name = malloc(sizeof(name));
	ndog->owner = malloc(sizeof(owner));
	if (ndog->name && ndog->owner && ndog)
	{
		strcpy(ndog->name, name);
		strcpy(ndog->owner, owner);
		ndog->age = age;
	}
	else
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	return (ndog);
}
