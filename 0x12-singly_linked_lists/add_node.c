#include "lists.h"
/**
 * add_node - adds anew node at the beginning of a list_t list
 * @head: pointer to the firs node of the list_t list
 * @str: element of list_t list
 * Description: I shall be using strdup() to copy contents
 *	of passed str into the new head->str
 * Return: returns the address of the new element
 *	or NULL if the function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (str == NULL)
		return (*head);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* creating the new element of list_t list */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;
	return (*head);
}
