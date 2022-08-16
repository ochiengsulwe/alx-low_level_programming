#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Description - add two numbers
 * @argc: variable used
 * @argv: variable used
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;
	char *p;



	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
