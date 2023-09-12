#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers,
 * Description: 'the program's description'
 * Followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if
				(a == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');

	return (0);
}
