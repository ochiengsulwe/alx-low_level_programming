#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of list.
 * @head: start of the list to be added unto.
 * @n: data part to be added.
 * Return: address of the new added node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cursor = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = new;
	new->prev = cursor;
	return (new);
}
