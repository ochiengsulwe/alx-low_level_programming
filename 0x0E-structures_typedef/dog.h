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
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif
