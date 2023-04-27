#include "main.h"

/** 
 * string_nconcat - concatenates s1 and s2
 * @n: the number of bytes to be concatenated from s2 to s1
 * Return: returns pointer to a new location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str; /* the new string got from concatenating n bytes */
	int offset = strlen(s1); /* will mark the poit in memory we will start copying from*/

	/* Allocate memory to the new string pointer*/
	str = malloc(offset + n);
	if (str == NULL)
		return NULL;
	/* copy contents of s1 to str followed by n bytes from s2 */
	strncpy(str, s1, offset);
	strncpy(str + offset, s2, n);
	return str;
}
