#include "main.h"

/**
 * print_line - draws a diagonal line
 *
 * @n: character argument
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j;
	char c = '\\';

	for (i = 0; i < n; i++)
	{
		_putchar(c);
		_putchar('\n');
		for (j = -1; j < i; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
