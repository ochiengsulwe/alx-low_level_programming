#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return NULL;
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
		return NULL;
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return array;
}
