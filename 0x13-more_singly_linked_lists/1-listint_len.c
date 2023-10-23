#include "lists.h"

/**
 * listint_len - A function that returns the number of
 *		elements in a linked listint_t list.
 * @h: Pointer to the list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
