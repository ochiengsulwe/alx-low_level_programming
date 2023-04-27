#include "main.h"
/**
 * array_range - createsa an arrray of integers
 * @min: starting point of the array, included in array elememnts
 * @max: end point of array, included in array elements
 * Description: returns NULL if min > max or if malloc fails
 *	elements are ordered from min to max
 * Return: returns pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array; /* The pointer to aary to store new array elements*/
	/* Determine array size */
	int size = (max - min) + 1;

	if (min > max)
		return NULL;
	/* Allocate memory to array */
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return NULL;
	for(i = 0; i < size; i++)
	{
		*(array + i) = min;
		min++;
	}
	return array;
}
