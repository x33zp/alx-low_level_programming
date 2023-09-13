#include "main.h"

/**
* print_last_digit - Checks for lowercase character
*
* @i: character arguement
*
*
* Return: 1 and 0 depending on the condition
*/

int print_last_digit(int i)
{
	int p;

	if (i < 0)
		i = -i;
	p = i % 10;

	if (p < 0)
		p = -p;
	_putchar(p + '0');
	return (p);
}
