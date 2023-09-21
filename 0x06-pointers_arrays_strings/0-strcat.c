#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @src: argument
 * @dest: argument
 *
 * Returns: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
