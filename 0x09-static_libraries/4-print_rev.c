#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_rev - prints in reverse followed by a string
 * @s: input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		putchar(s[--len]);

	putchar('\n');
}

