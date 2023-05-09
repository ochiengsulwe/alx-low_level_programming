#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed to binary
 * Return: the function returns nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int pos; /* used to track the positoon of bits */
	int b = sizeof(unsigned long int) * 8 - 1;
	int count = 0;

	for (; b >= 0; b--)
	{
		pos = n >> b;
		if (pos & 1)
		{
			_putchar('1');
			count++;
		}
		else
		{
			if (count)
				_putchar('0');
		}
	}
	if (!count)
		_putchar('0');
}
