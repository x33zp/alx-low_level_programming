#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 *
 * @s1: argument
 * @s2: argument
 *
 * Return: 0
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
