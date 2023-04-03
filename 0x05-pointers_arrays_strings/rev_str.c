#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	/* To reverse a string we need to know the following:
	 - string lenth: which we can get by determining the size
	 */
	int len;
	char temp;
	char *first;/* pointer to the first element */
	char *last; /* pointerto the last element element */


	len = strlen(s);
	first = s;
	last = s + len - 1;

	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;

		first++;
		last--;
	}
}
