#include "main.h"

/**
 * is_prime - Finds he prime number
 * @a: a character arguement
 * @b: a character arguement
 * Return: Boolean value of the state of inputs
 */

int is_prime(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	return (is_prime(a, b - 1));
}
/**
 * is_prime_number - A function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: an input value
 * Return: The state of the input value
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
