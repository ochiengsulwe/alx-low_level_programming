#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the heade to linked list to be traversed.
 * Return: the number of nodes in the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
