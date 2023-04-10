#include "main.h"
/**
 * _strncpy - copies src to dest replacing only the first n characters
 * @dest: an argument
 * @src: string to be copied to dest
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	/* copy n chars if the total is less than n*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		temp[i] = src[i];
	}

	/* if chars in src are less than n append \0 */
	for ( ; i < n; i++)
	{
		temp[i] = '\0';
	}
	return temp;
}
