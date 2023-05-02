#include "lists.h"

/**
 * list_len - returns the numner of elements in a linked list_t list
 * @h: pointer to the linked list
 * Return: returns the number elements of the linked list passed to it
 */

size_t list_len(const list_t *h)
{
	size_t count = 0; /* counter to keep track of elements of list*/

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	/*printf("-> %lu elements", count);*/
	return (count);
}
