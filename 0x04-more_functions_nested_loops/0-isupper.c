#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c - character argumnent
 *
 * Return: 1 or 0 given the case
 */

int _isupper(int c)
{
	if (c >= 'A' || c >= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
