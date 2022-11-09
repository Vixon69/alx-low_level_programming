#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: the pointer to the head node
 */

void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		if (head->next != NULL)
		{
			head = head->next;
			free (head);
		}
		else
			free(head);
	}

}
