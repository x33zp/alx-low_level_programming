#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Number to be checked
 * @index: Is the index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	return (n >> index & 1);
}
