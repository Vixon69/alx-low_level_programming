#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: the pointer to the head node
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t tmp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
