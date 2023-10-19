#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: A pointer to the list variables
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
