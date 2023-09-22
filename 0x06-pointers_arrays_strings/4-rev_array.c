#include "main.h"

/**
 * reverse_array - a function that reverses
 *		   the content of an array of integers.
 *
 * @a: argument
 * @n: argument
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int s = 0, e = n - 1;

	while (s < e)
	{
		int temp = a[s];

		a[s] = a[e];

		a[e] = temp;

		s++;
		e--;
	}
}
