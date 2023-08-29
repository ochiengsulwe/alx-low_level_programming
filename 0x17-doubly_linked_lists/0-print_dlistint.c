#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head node for the list.
 * Return: returns the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t nodeCount = 0;

	while (temp != NULL)
	{
		nodeCount++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (nodeCount);
}
