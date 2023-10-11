#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: name of the person
 * @f: A function pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
