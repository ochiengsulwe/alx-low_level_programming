#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: list to be traversed.
 * @index: the index at which the node to be ruturned is placed.
 * Return: returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count =  -1;
	dlistint_t *mover =  NULL;

	mover = head;
	while (count < index)
	{
		count++;
		mover = mover->next;
	}
	mover = mover->next;
	return (mover);
}
