#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: strings to be searched.
 * @accept: set of bytes to be searched for
 * Return: s aand NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

