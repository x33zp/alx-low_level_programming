#include <stdio.h>

/**
 * main - The main function
 * @argc: The arguement counter
 * @argv: The arguement vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i >= 0)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
