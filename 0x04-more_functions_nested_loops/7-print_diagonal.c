#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: character argument
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, m;

	char ch = '\\';

	for (i = 0; i < n; i++)
	{
		_putchar(ch);
		_putchar('\n');
		for (m = -1; m < i; m++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
