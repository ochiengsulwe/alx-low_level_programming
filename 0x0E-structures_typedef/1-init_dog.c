#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - short description
  * @d: pointer pointer to a structure
  * @name: name of the dog
  * @age: age of dog
  * @owner: owner of dog
  * Description: Longer description
  */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = ownwer;
	}
}
