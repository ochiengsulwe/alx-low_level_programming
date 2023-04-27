#include "main.h"
#include <stdlib.h>
/** malloc_checked - a function that allocates memory using malloc
 * @b: size in bytes to be allocated
 * Return: returns pointer to the newly allocated memory
 */

 void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return memory;
}
