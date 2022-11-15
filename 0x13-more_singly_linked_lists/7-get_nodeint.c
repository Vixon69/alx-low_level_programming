#include "lists.h"
/**
 * get_nodeint_at_index - write a function that returns the nth node
 * of a listint_t linked list
 * @head: the head pointer
 * @index: the nth node
 * Return: NULL or the data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		head = head->next;

		if (count == index)
			return (head);

		count++;

	}
	return (NULL);
}
