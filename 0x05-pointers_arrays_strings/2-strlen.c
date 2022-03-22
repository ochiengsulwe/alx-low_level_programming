#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the string length
 *
 * @s: input string
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
