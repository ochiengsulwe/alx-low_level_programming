#include "main.h"
/**
 * prints_time_table - prints a table of n x n to the stdout
 * @n: the arg value to create the table from
 * Return: returns void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 14 || n < 0)
	{
		return;
	}
	else
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%3d", i * j);
				if (j != n)
				{
					printf(",");
				}
			}
			printf("\n");
		}
}
