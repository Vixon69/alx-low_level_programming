#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: the pointer to the head node
 * Return: void.
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head);
		}
	}
}
