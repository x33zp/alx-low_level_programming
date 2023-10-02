#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: argument
 *
 * Return: -1, 1, recursive function.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
