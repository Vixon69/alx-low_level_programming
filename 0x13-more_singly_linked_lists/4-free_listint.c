#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head:a pointer to the head
 * Return: void.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(head);

}
