#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: pointer to the beginning of the list to be freed
 * Description: The function frees the list by iterating over it,
 *	freeing each node one by one
 * Return: returns nothing.
 */
void free_list(list_t *head)
{
	list_t *next;
	list_t *current_node = head;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next;
	}
}
