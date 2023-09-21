#include "main.h"

/**
 * print_square - function that prints a square
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;
	char c = '#';

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(c);
			}
		_putchar(c);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
