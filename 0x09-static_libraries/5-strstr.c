#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: String to be searched
 * @needle: substring
 * Return: haystack or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
			while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (0);
}
