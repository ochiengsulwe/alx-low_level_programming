#include "main.h"

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return dest;
}
