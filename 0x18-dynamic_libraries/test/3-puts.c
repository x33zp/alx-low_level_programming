#include <stdio.h>
#include "main.h"
/**
 * _puts - A function that prints a string
 *
 * @s: string to be printed
 *
 */

void _puts(char *s)
{
	int len = 0, i = 0;

	for (; s[len] != '\0'; len++)
	{}
	while (i < len)
	{
		_putchar(s[i++]);
	}
	_putchar('\n');
}
