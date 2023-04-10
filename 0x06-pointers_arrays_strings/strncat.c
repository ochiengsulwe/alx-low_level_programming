#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;
	char *temp = src;

	/* find the end of dest */
	while (dest[len] != '\0')
	{
		len++;
	}
	/*then add n src bytes to the end of dest */
	for (i = 0; i < n && temp[i] != '\0'; i++)
	{
		dest[len + i] = temp[i];
	}
	dest[len + n] = '\0';
	src = temp;
	return dest;
}
