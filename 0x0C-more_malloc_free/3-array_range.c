#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum string length
 * @max: maximum string length
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, range;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;

	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
