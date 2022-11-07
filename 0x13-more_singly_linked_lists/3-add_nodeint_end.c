#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds a new node at
 * the end of a listint_t list.
 * @head: a pointer to the head
 * @n: the new data
 * Return: NULL or the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL) ;
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}
