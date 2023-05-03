#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @str: element of a list_t list to be passed
 * @head: pointer to the start of the list
 * Return: function returns the address of the new element or NULL o failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;

	/*allocate memery for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	/* duplicate the value of str to new->str */
	new_node->str = strdup(str);
	/* pass strlen(str) to new->len */
	new_node->len = strlen(str);
	new_node->next = NULL; /* this is so as it is the last node */
	/* logic to push the new node to end of the list */
	if (*head  == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
