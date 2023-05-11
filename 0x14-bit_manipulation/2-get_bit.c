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

	if (index >= sizeof(n) * 8)
		return (-1);
	shifted = n >> index;
	result = shifted & mask;
	return (result);
}
