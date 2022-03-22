#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string pointed to by scr
 * including the terminating null byte('\0')
 * to the buffer pointed to by dest
 *
 * @dest: buffer address to copy string
 * @src: address of string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
