#include "main.h"

/**
* print_alphabet_x10 - check code
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
