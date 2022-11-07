#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: the head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t lens = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lens++;
	}
	return (lens);


}
