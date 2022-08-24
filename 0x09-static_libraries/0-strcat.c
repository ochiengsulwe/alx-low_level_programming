#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination  string
 * @src: source string
 *
 * Return: returns *p
 */

char *_strcat(char *dest, char *src)
{
	char *p;

	strcat(dest, src);
	p = dest;

	return (p);
}
