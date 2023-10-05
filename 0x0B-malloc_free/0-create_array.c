#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 *		  and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character arguement
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
