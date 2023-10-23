#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
