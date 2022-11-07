#include "lists.h"

/**
 * add_nodeint - a function that adds a node to the beginning of a list_t list
 * @head: the pointer to the head
 * @n: the new data
 * Return: NULL or the address for the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
