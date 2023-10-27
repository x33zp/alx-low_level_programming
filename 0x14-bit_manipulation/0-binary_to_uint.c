#include "main.h"

/**
 * binary_to_uint - A function that converts a
 *		binary number to an unsigned int.
 * @b: String of numbers to be converted
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int power;
	unsigned int sum;
	unsigned int value;
	const char *s;

	s = b;
	while (*b != '\0')
	{
		b++;
	}
	b--;
	i = 0;
	power = 0;
	sum = 0;
	value = 0;
	while (b >= s)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		i = *b - '0';
		value = i * (1 << power);
		sum += value;
		b--;
		power++;
	}
	return (sum);
}
