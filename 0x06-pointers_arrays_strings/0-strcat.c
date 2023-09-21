#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates two strings.
 * @src: source to concatenate
 * @dest: destination to concatenate
 * Return: Dest.
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
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
