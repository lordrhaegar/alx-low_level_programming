#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - print chessboard
 * Description - print a multi-dimensional array
 * @a: pointer to the first row of the array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
