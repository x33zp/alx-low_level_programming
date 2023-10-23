#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a
 *			new node at a given position.
 * @head: A pointer to the list
 * @idx: The index of the list where the new node should be added.
 * @n: Value to be passed.
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy;
	unsigned int node;

	copy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
		{
			return (NULL);
		}
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
