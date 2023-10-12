#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: is the number of integers passed to the function
 * Return: interger
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
