#include "main.h"

char *string_toupper(char *ch)
{
	/* check first if the character is lowercase letter */
	if ( *ch >= 'a' && *ch <= 'z')
	{
		return ch - 'a' + 'A';
	}
	return (ch);
}
