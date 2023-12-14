#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * Return: 0, -15 or 15.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
