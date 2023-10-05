#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A function that prints the chessboard.
 * @a: Character array.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d", a[i][j]);
			if (j == 7)
			{
				printf("\n");
			}
		}
	}
}
