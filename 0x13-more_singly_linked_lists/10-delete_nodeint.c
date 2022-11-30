#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: the head node
 * @index: the ndoe to be deleted
 * Return: 1 if successfull and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *h;

	h = *head;

	if (h == NULL)
		return (-1);

	if (index == 0)
	{
		free(h);
		return (1);
	}

	for (i = 0; i < index && index != 0; i++)
	{
		h = h->next;
	}
	free(h);

	return (1);
}
