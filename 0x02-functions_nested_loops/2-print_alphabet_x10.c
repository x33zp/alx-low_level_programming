#include "main.h"

/**
* print_alphabet_x10 - check code
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void) 
{
	int i = 0, p;

	while (i < 10)
	{
		p = 'a';
		while (p <= 'z')
			{
				_putchar(p);
				p++;
			}
	_putchar('\n');
	i++;
	}
}
