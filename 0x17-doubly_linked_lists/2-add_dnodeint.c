#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning og the list.
 * @head: pointe rto linked list the node is to be added unto.
 * @n: data component of the node.
 * Return: the address of the new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

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
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
