#include "lists.h"

/**
 * print_list -a funtion that prints all the elements of a list_t
 * @h: the pointer to the struc
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	char *name = h->str;
	unsigned int num = h->len;
	size_t i = 0;

	if (h->next != NULL)
		i++;

	if (name == NULL)
		printf("[0] (nil)");
	else
		printf("[%d] %s", num, name);

	return (i + 1);
}
