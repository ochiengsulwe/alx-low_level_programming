#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first element of the list
 * @str: an element of type list_t
 * Return: returns a a pointer to the first element of the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/** Allocate memory to the node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* create elements to new_node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	/** new_node->next to point to where *head->next pointing*/
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
