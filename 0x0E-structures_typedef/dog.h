#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a new type dog
  * @name: first member
  * @age: second member
  * @owner: third member
  * Description: nothing much to say about it ye
  */

struct dog
{
	char *name, *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
