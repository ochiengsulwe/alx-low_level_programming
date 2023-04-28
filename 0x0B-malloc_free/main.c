#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	printf("%s",s);
	free(s);
	return (0);
}