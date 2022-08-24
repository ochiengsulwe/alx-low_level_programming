#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
