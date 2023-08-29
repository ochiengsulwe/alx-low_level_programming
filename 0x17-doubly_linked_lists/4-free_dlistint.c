#include "lists.h"
/**
 * free_dlistint - frees a list parsed to it.
 * @head: pointer to the list to be freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del = NULL;

	del = head;
	while (del != NULL)
	{
		del = head->next;
		free(head);
		head = del;
	}
}
