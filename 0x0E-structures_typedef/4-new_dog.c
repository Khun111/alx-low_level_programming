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

	if (!ndog)
		return (NULL);
	ndog->name = malloc(sizeof(name));
	if (!ndog->name)
	{
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = malloc(sizeof(owner));
	if (!ndog->owner)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->owner, owner);
	return (ndog);
}
