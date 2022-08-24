#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _puts - prints a string to stdout
 * @str:input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
