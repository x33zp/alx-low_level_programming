#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len;
	int len1 = 0;
	int len2 = 0;
	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	len = len1 + len2;

	cat = malloc((len + 1) * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		cat[i] = s1[i];
	for (i = 0; i < len2; i++)
		cat[i + len1] = s2[i];

	cat[i + len1] = '\0';
	return (cat);
}
