#include "main.h"
void print_sum_multiples_five_three(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("The sum of all multiples of 3 and 5 below 1024 is %d\n", sum);
}
