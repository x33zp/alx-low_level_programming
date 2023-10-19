#include "lists.h"

/**
 * list_len - A function that returns the number of
 *		elements in a linked list_t list.
 * @h: A pointer to the list variables
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
