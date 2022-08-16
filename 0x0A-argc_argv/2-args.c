#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Description - print all arguments it receives
 * @argc: argument used
 * @argv: argument used
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
