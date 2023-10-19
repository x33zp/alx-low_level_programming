#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list.
 * @head: The pointer to the first element
 * @str: The string to be duplicated
 * Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int length = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	new->len = length;
	new->str = dup;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
