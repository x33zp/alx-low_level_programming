#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 * @head: The pointer to the list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tmp;


	if (*head == NULL)
		return (i);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
