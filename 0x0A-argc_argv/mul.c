#include "main.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	int mult;
	int count = argc - 1;
	if (count < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	exit (EXIT_SUCCESS);
}
