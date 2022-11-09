#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to a pointer, pointing to the head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *copy;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((copy = curr) != NULL)
		{
			curr = curr->next;
			free(copy);
		}
		*head = NULL;
	}
}
