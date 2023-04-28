#include <stdio.h>

/**
  * op_add - Returns the sum of two numbers.
  * @a: The first number.
  * @b: The second number.
  * Return: The sum of a and b.
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Returns the difference of two numbers.
  * @a: The first number.
  * @b: The second number.
  * Return: The difference of a and b.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - divides two int types
 * @a: one of the ints
 * @b: another int
 * Return: multiplication value of a and b
 */
int op_mul(int a, int b)
{
	return (a *b);
}
/**
 * op_div - divides two ints
 * @a:an int
 * @b: another int
 * Return: value of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - Returns the remainder of the division of two numbers.
  * @a: The first number.
  * @b: The second number.
  * Return: The remainder of the division of a by b.
  */

int op_mod(int a, int b)
{
	return (a % b);
}
