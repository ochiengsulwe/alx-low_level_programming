#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int len = 0;

	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
