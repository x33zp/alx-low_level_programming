#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * Author - zubby peculiar
 * File - list.h
 * Description: A header file for function prototypes in project
 *		0x12. C - Singly linked lists
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	/*
	 * list_s - points to the next element
	 * @next: points to the next node.
	 */
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
