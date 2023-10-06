#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main Function
 * @argc: The arguement counter
 * @argv: The arguement vector
 * Return: 1 or 0 depending on status
 */

int main(int argc, char *argv[])
{
	int num, digit, sum;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}

