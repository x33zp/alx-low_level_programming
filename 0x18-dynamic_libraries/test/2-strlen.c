#include "main.h"

/**
 * _strlen - It returns the length of a string.
 * @s: is a arguement
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
