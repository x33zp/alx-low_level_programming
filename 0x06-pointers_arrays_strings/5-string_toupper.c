#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase.
 *
 * @*: argument
 * 
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if(s[i] >= 'a' && s[i] <= 'Z')
			s[i] = s[i] - 'a';

	return (s);
}
