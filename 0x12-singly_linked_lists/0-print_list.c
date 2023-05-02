#include "lists.h"
/**
 * print_list - prints all elements of a list list_t list
 * @h: pointer to the list to be printed
 * If str is NULL, the program will print [0] (nil)
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count = count + 1;
	}
	return (count);
}
