#include "main.h"

/**
* _isalpha - Checks for letter, lower || uppercase character
*
* @c: character arguement
*
*
* Return: 1 and 0 depending on the condition
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
