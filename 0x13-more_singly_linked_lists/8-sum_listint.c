#include "lists.h"
/**
 * sum_listint - a function that sums all the data in a list
 * @head: the head node
 * Return: 0 if empty or the sum
 */

int sum_listint(listint_t *head)
{
	int sum_t = 0;

	while (head != NULL)
	{
		sum_t += head->n;
		head = head->next;
	}
	return (sum_t);
}
