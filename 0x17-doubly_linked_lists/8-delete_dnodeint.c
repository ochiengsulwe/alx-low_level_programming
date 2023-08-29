#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 *	linked list.
 * @head: pointer to the list we want to delete from.
 * @index: index at which we will be deleting a node.
 * Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;
	dlistint_t *mover = *head;
	dlistint_t *rev = NULL;

	if (index == 0)
	{
		mover = mover->next;
		if (mover)
			mover->prev = NULL;
		free(*head);
		*head = mover;
		return (1);
	}
	while (count < index - 1)
	{
		count++;
		mover = mover->next;
		if (!mover)
			return (-1);
	}
	temp = mover->next;
	if (!temp)
		return (-1);
	rev = temp->next;
	mover->next = rev;
	if (rev)
		rev->prev = mover;
	free(temp);
	return (1);
}
