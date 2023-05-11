#include "main.h"
/**
 * set_bit - set bit at position index to 1
 * @n: the number to be worked on
 * @index: the index position to set
 * Return: 1 if it worked, or
 *	-1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;
	int new;

	if (index >= sizeof(*n) * 8)
		return (-1);
	new = *n |= mask;
	return (new);
}
