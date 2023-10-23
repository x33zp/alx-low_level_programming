#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 *			node of a listint_t linked list.
 * @head: A pointer to the list
 * @index: The nth node of a listint_t linked list.
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
