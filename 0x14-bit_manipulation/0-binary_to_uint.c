#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the beginning of the passed binary number
 * Return: returns the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;
	unsigned int exponent = strlen(b) - 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0' ; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = sum + ((b[i] - '0') * (pow(2, exponent)));
			exponent--;
		}
		else
			return (0);
	}
	return (sum);
}
