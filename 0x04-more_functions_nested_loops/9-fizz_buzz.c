#include "main.h"
#include <stdio.h>

 /**
  * main - prints fizz for mult of 3 and buzz for mult of 5,
  * fizbuzz for mult of 3 and 5
  *
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");

	return (0);
}
