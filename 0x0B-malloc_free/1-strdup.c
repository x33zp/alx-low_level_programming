#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 *	     to a newly allocated space in memory
 *
 *@str: string to be duplicated
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc((i + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}

	return (dup);
}
