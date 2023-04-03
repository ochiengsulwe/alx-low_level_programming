#include "main.h"
#include <string.h>

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		s = s + 2;
	}
	_putchar('\n');
}	
