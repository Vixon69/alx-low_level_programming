#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n)
 * @head: the the head node
 * Return: 0 if empty or data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *copy;

	if (*head == NULL)
		return (0);
	while (*head != NULL)
	{
		copy = *head;
		i = copy->n;
	}
	return (i);



}
