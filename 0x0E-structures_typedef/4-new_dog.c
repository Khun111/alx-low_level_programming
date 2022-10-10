#include "dog.h"
/**
 * new_dog - function to create new dog
 * @name: name location gets altered
 * @age: age remains untouched
 * @owner: same for owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner){
	char *nname;
	char *nowner;
	dog_t *ndog;
	nname = malloc(sizeof(name));
	nowner = malloc(sizeof(owner));
	ndog = malloc(sizeof(dog_t));
	if (!nname || !nowner || !ndog)
	{
		free(nname);
		free(nowner);
		free(ndog);
		return (NULL);
	}
	strcpy(nname, name);
	strcpy(nowner, owner);
	ndog->name = nname;
	ndog->owner = nowner;
	ndog->age = age;
	return (ndog);
}
