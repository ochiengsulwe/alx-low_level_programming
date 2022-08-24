#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		putchar(str[i]);

	putchar('\n');
}

