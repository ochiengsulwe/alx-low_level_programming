#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a specified index.
 * @h: pointer to the lists to wgich we are adding the node.
 * @idx: the indext to which we are adding the node.
 * @n: the node data to be added.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *temp = *h;
	dlistint_t *new = NULL;
	dlistint_t *holder = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	while (temp != NULL && count < idx)
	{
		count++;
		temp = temp->next;
	}
	holder = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next = holder;
	return (new);
}
