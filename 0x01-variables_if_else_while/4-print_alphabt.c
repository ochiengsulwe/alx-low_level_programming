#include <stdio.h>
/**
 * main - prints alphabets without e and q
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		else
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
