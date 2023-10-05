#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: argument
 * @src: argument
 * @n: argument
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}

	dest[i] = '\0';

	return (dest);
}
