#include "function_pointers.h"

/**
 * int_index - searches for an integer within an array
 * @array: array to be searched through
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Description: the function returns the index of the first element 
 * 	for which the cmp function does not return 0
 * if no element matches, returns -1
 * if size <= 0, return -1
 * Return: returns an int type
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	if (!(cmp(array[i])))
		return (-1);
	return (0);
}
