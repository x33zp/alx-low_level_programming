#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: A pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
