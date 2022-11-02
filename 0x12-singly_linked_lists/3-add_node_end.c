#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer to the head
 * @str: the new string to be added
 * Return: NULL or the address of the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	size_t nchar;

	list_t *new_node;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = new_str;

	for (nchar = 0; str[nchar]; nchar++)
		;

	new_node->len = nchar;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (last);
}
