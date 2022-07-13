#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: an integer to work on
 *
 * Return: returns *p
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p;

	strncat(dest, src, n);
	p = strncat;

	return (p);
}

