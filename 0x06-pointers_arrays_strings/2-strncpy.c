#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies two strings
 * @dest: destination string
 * @src: source string
 * @n: the number of characters to be copied from source
 *
 * Return: returns c
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *c;

	strncpy(dest, src, n);
	c = dest;

	return (c);
}
