#include <stdio.h>
/**
 * main - prints the alphabets in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char alph;

	for  (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
