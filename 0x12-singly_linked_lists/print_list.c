#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the start of the list to be printed
 * Description: if h->str is NULL, the program prints [0] (nil)
 * Return: returns the number of nodes in the list,
 *	as well as printing the content of list_t list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /* used to keep count of nodes in list_t list */
	const list_t *current; /* i use this show me wher exactly I am at on the list */
	current = h;

	if (current == NULL)
	{
		printf("The linked list is empty!!\n");
	}
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(current->str), current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}
