#include "lists.h"

/**
 * add_node - A function that adds a new node at
 *		the beginning of a list_t list.
 * @head: A pointer to the beginning of a list
 * @str: The string to be duplicated
 * Return: the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
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
	new->next = *head;

	*head = new;

	return (new);
}
