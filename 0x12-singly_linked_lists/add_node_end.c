#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the beginning of list_t list
 * @str: string to be passed to head->str
 * Return: returns the address of the new element,
 *	NULL if the function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;/* I use current to iterate over the list
				 * so as not to lose head
				 */
	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* creat new node on success of malloc */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* if the list is initially empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* move the pointer to point to the last node */
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
