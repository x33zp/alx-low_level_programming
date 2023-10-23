#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: The address of the list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
