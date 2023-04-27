#include "dog.h"

/**
 * init_dog - initializes a cariable of type dog
 * @d: pointer to the intialised type member
 * @name: name of dog. struct dog element
 * @age: age of dog. struct dog element
 * @owner: owner of d. struct element
 * Return: returns nothing.Just initilizes
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
