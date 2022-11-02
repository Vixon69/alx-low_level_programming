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
	size_t nchar;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = newdata;

	for (nchar = 0; str[nchar]; nchar++)
		;

	new_node->len = nchar;
	new_node->next = *(head);
	*(head) = new_node;

	return (*head);
}
