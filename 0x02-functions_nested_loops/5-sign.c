#include "main.h"

/**
* print_sign - Checks code
*
* Return: 1, 0 or -1 depending on the condition
*/

int print_sign(int n)
{
	if (n > 0)
		{
			_putchar('+');
			return (1);
		}

	else if (n < 0)
                {
                        _putchar('-');
                        return (-1);
                }

	else
                {
                        _putchar(48);
                        return (0);
                }
}
