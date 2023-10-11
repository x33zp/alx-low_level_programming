#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers
 * @a: integer to be added
 * @b: integer to be added
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers
 * @a: integer to be subtracted
 * @b: integer to be subtracted
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: integer to be multiplied
 * @b: integer to be multiplied
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two integers
 * @a: integer to be divided
 * @b: integer to be divided
 * Return: integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the remainder of the division of two numbers
 * @a: integer
 * @b: integer
 * Return: integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
