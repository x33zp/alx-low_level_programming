#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * File - variadic_functions.h
 * Author - zubby peculiar
 * Description: Header contains prototype for all functions
 * 		used in 0x10. C - Variadic functions.
 */

#include <stdarg.h>

/**
 * struct print - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 * 		a data type corresponding to symbol.
 */
typedef struct print
{

	char *symbol;
	void (*print)(va_list arg);

} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
