#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Description: a digit should only appear once a in a combination
 * Return: always 0
 */

int main(void)
{
	int k, j, i;

	for (k = '0'; k <= '9'; k++)
	{
		for (j = k + 1; j <= '9'; j++)
		{
			for (i = j + 1; i <= '9'; i++)
			{
				if (i != j && i != k)
				{
					putchar(k);
					putchar(j);
					putchar(i);

					if (k == '7' && j == '8' && i == '9')
					continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
