#include "lists.h"

/**
 * listint_len - A function that returns the number
 * of elements in a linked listsint_t list.
 * @h: the head
 * Return: the no of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);


}
