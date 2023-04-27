#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	unsigned int i;
	char *new_str;
	unsigned int len = strlen(str);

	new_str = malloc(sizeof(*str));
	if (new_str == NULL)
		return NULL;
	for (i = 0; i < len;i++)
	{
		*(new_str + i) = *(str + i);
	}
	*(new_str + i) = '\0';
	return new_str;
}
