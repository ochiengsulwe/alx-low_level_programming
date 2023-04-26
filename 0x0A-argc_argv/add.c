#include "main.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc <= 1)
	{
		printf("%d\n", sum);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	exit (EXIT_SUCCESS);
}
