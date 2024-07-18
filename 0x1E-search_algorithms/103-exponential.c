#include "search_algos.h"

int binarySearch(int *array, size_t left, size_t right, int value);
/**
 * exponential_search - A function that searches for a value in a sorted
 *		array of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, if array is NULL, your
 *						function must return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, right, left;

	if (array == NULL || size == 0 || !value)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	left = i / 2;
	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	return (binarySearch(array, left, right, value));
}

/**
 * binarySearch - A recursive binary search function
 * @array: is a pointer to the first element of the array to search in
 * @left: left side of the array
 * @right: right side of the array
 * @value: is the value to search for
 * Return: the location og value in a given array, otherwise -1
 */

int binarySearch(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (right >= left)
	{
		i = left;
		printf("Searching in array: ");
		while (i <= right)
		{
			printf("%d", array[i++]);
			if (i <= right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binarySearch(array, left, mid - 1, value));
		else
			return (binarySearch(array, mid + 1, right, value));
	}
	return (-1);
}
