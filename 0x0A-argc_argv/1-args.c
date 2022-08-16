#include "main.h"
#include <stdio.h>

/**
 * main -  check the code
 * Description - prints the number of arguments passed
 * @argc: argument used
 * @argv: argument used
 * Return: int
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
