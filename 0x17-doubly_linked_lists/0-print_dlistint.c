#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head node for the list.
 * Return: returns the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint temp = NULL;
	size_t nodeCount = 0;

	temp = h;
	if (temp == NULL)
		return (nodeCount);
	while (temp != NULL)
	{
		nodeCount++;
		temp = temp->next;
	}
	return (nodeCount);
}
