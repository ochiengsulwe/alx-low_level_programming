#include "dog.h"
/**
  * struct dog - short description
  * @*name: member one
  * @age: member two
  * @*owner: member three
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
