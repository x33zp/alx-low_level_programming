#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++) 
	{
		putchar(p);
	}
	
	for (p = 'A'; p <= 'Z'; p++ )
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
