#include <string.h>
#include "main.h"

void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
