#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while(*temp)
	{
		temp++;
	}
	
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	
	temp = '\0';
	return (dest);
}


