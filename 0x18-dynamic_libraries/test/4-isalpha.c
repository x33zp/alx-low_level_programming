#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: is a character arguement
 *
 * Return: 0 or 1 depending on condition.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
