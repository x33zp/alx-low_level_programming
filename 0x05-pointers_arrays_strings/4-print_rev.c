#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * 
 * @s - a character
 * 
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, j, num;

	i = 0; 

	while (s[i] != '\0')
	{
		i++;
	}

	num = i;

	for (j = num - 1; 1 >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
