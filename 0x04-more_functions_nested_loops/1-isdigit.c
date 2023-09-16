#include "main.h"

/**
 * _isdigit - checks for uppercase character
 *
 * @c: character argumnent
 *
 * Return: 1 or 0 given the case
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
