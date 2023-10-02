#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 *  natural square root of a number.
 *
 * @n: argument
 *
 * Return: -1, 1, recursive function
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (find_sq(n, 1));
}

/**
 * find_sq - It determines the squar root of
 * @a: a character arguement
 * @b: a character arguement
 * Return: the input value
 */

int find_sq(int a, int b)

{
	if ((b * b) == a)
		return (b);

	else if (b == a / 2)
		return (-1);

	return (find_sq(a, b + 1));
}
