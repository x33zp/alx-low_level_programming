#include "main.h"
#include <stdio.h>

/**
 * _strncat - A function that concatenates two strings.
 *
 * @dest: The destination of concatenation.
 * @src: The source array of concatenation.
 * @n: The length of array.
 * Return: Dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
