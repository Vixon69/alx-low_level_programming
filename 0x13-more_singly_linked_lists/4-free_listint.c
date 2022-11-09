#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: the pointer to the head node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *copy;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);

	}

}
