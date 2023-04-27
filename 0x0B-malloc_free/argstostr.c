#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *argstostr(int ac, char **av)
{
	int i;
	char *argv;
	int size = 0;
	int offset = 0;

	/* Returns NULL when no argument is passed */
	if (ac == 0 || av == NULL)
		return NULL;

	/* Determine the size of the new array of strings */
	for (i = 0; i < ac; i++)
	{
		size = size + (strlen(av[i]) + 1);
	}

	/* Allocate memory for the new array */
	argv = malloc(size);
	if (argv == NULL)
		return NULL;

	/* copy args to the new array */
	for (i = 0; i < ac; i++)
	{
		int len = strlen(av[i]);
		strncpy(argv + offset, av[i], len);
		argv[offset + len] = '\n';
		offset = offset + (len + 1); /* add 1 for the \n character*/
	}
	return argv;
}
