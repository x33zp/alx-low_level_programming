#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: character argument
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;
	char c = '_';

	for (i = 0; i < n; i++)
		_putchar(c);
	_putchar('\n');
}
