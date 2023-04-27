#include "dog.h"

/**
 * print_dog - prints a struct dog with its elements
 * @d: the pointer to struct dog to be printed
 * Description: if an element of d is NULL, the program prints "(nil)" instead of this  element
 *	e.g if name is NULL -> Name: (nil)
 * if d is NULL the function prints nothing
 * Return: returns nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit (EXIT_FAILURE);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	/*if (d->age == NULL)
		printf("Age: (nil)\n"); */
	printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
