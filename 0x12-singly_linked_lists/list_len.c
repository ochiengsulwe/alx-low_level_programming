#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the start of the linked list
 *	the function is to print its elements
 * Return: returns the total number of node of the passed list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h; /* I use this I treverse the list */
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
