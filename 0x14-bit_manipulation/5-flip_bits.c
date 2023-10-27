#include "main.h"

/**
 * flip_bits - A  function that returns the number of bits you would
 *		need to flip to get from one number to another.
 * @n: Number to be flipped
 * @m: Number to be flipped
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
