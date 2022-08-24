#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to compare
 * @accept: the string to search
 * Return: a pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
