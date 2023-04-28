#include "function_pointers.h"

/** 
 * print_name - prints a name passed as an argument
 * @name: pointer to the string to be printed
 * @f(): a functio pointer
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}	
