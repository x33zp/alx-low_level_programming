#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * 
 * @str: argument
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int len, n, m;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (m = len / 2; str[m] != '\0'; m++)
		{
			_putchar(str[m]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
