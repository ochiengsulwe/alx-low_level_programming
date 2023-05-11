#include "main.h"
/**
 * clear_bit - unsets a bit a t index
 * @n: pointer to number to be worked on
 * @index: the index to unset the bit at
 * Return: 1 when success, or
 *	-1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(*n) * 8)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
