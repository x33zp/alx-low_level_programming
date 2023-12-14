#include "main.h"
#include <stdio.h>

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: A destination for copy
 * @src: A source array for copy
 * @n: size to be copied.
 * Return: Dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
