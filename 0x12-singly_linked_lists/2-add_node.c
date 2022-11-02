#include "lists.h"
/**
 * add_node - this is a function that adds a node to the beginning of a list
 * @head: the pointer to a the pointer head
 * @str: the data
 * Return: NULL or the address of the new element(node).
 */

list_t *add_node(list_t **head, const char *str)
{
	char *newdata = strdup(str);
	list_t *new_node;
	
	if (head != NULL)
	{
		new_node = malloc(sizeof(list_t));
		new_node->str = newdata;
		new_node->next = (*head);

		*(head) = new_node;
	}
	else 
		return (NULL);

	return (0);
}
