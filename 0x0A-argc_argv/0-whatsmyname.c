#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * Description - a program that prints its name followed by a new line
 * @argc: agument used
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
