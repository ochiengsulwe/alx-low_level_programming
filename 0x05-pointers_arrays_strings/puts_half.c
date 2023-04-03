#include "main.h"
#include <string.h>

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int start = len / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
