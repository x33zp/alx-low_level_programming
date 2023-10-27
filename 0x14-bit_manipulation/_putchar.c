#include <unistd.h>

/**
 * _putchar - A function that prints characters
 * @c: Character to be printed
 * Return: Char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
