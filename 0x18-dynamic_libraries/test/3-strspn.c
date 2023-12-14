#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
