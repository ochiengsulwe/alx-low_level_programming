#include "main.h"
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	int i;
	int k;
	char *temp;
	int len2 = strlen(s2);
	int len = strlen(s1);
	int size = sizeof s1 + sizeof s2;

	temp = malloc(size);
	if (temp == NULL)
		return NULL;
	/** if (s1 == NULL && s2 == NULL)
	 *	s1 = "";
	 */
	for (i = 0; i < len; i++)
	{
		temp[i] = s1[i];
	}
	for (k = 0; k < len2; k++)
	{
		temp[len + k] = s2[k];
	}
	temp[size] = '\0';
	return temp;
}
