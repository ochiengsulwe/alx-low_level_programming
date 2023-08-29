#include "lists.h"

/**
 * sum_dlistint - sums node vlues
 * @head: pointer to the linked list to be summed.
 * Return: the sum of node values.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_int *mover = head;

	while (mover != NULL)
	{
		sum += mover->n;
		mover = mover->next;
	}
	return (sum);
}
