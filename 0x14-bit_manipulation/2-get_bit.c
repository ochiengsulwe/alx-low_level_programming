#include "main.h"
/**
 * get_bit - determines the value of a bit at a given index
 * @n: the binary number to work with
 * @index: the index to check
 * Return: the value of the bit at index or
 *	-1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int result;
	unsigned int shifted;

	shifted = n >> index;
	result = shifted & mask;
	if (result == 0)
		return (0);
	else if (result == 1)
		return (1);
	else
		return (-1);

	return (result);
}
