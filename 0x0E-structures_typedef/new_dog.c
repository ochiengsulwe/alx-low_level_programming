#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Should return NULL if the function fails
 * Return: returns pointer to new created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	/* Allocate memory for struct dog */
	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return NULL;
	/* Allocation of memory for the type pointer elements */
	pup->name = malloc(strlen(name) + 1);
	pup->owner = malloc(strlen(owner) + 1);
	if (pup->name == NULL || pup->owner == NULL)
	{
		free(pup);
		return NULL;
	}
	/* copy name and owner  to struct dog */
	strcpy(pup->name, name);
	pup->age = age;
	strcpy(pup->owner, owner);
	return pup;
}
