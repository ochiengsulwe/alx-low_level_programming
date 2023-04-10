#include "main.h"
#include <string.h>

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = strlen(s1) - 1;
	int len2 = strlen(s2) - 1;

	for (i = 0; s2[i] != '\0'; i++)
	{
		if ((s1[i] == s2[i]) && (len1 == len2))
		{
			return (0);
		}
		if ((s1[i] > s2[i]) || (len1 > len2 ))
		{
			return (15);
		}
		if ((s1[i] < s2[i]) || (len1 < len2))
		{
			return (-15);
		}
	}
	return (0);
}
