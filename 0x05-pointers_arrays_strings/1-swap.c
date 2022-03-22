#include <stdio.h>
#include <stdlib.h>
/**
 *swap_int - swaps integer values
 *
 * @s: input integer pointer
 * @t: output integer pointer
 * Return: nothing
 */
void swap_int(int *s, int *t)
{
	int temp;

	temp = *s;
	*s = *t;
	*t = temp;
}
