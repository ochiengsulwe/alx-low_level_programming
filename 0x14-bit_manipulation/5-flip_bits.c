#include "main.h"
/**
 * flip_bits - determines number of bits to be flipped to
 *	get from one number to another
 * @n: one of the numbers
 * @m: the other number to be compared
 * Return: the total count of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int flip = 0;

	if (n == m)
		return (count);
	flip = m ^ n;
	while (flip)
	{
		if (flip & 1)
			count += 1;

		flip = flip >> 1;
	}
	return (count);
}
