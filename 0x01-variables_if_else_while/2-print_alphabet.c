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
	char p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return(0);
}
