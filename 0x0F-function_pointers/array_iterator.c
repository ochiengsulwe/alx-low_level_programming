#include "function_pointers.h"
/**
 * array_ierator - executes the function given as the parameter on each element of the passed array
 * @size: is the size of the passed array
 * @action: a pointer to the function to be used
 * @array: pointer to the array to be iterated over
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
