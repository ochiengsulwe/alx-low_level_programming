#include "main.h"
/**
 * _calloc - allocataes memory for an array using malloc
 * @nmemb: number of the array elements 
 * @size: size in bytes of each nmemb
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	array = malloc(nmemb * size);
	if (array == NULL)
		return NULL;
	if (nmemb == 0 || size == 0)
		return NULL;
	memset(array, 0, nmemb * size);
	return array;
}
