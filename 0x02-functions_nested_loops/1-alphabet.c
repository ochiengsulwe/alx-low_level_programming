#include "main.h"
/**
 * print_alphabet - prints the English Alphabets from a-z
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
