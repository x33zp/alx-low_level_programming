#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 * @array: array to be iterated
 * @size: size of array
 * @action: pointer to the function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (size--)
	{
		action(array[i++]);
	}
}
