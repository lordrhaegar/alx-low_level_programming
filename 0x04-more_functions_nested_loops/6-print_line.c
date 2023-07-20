#include <stdio.h>
#include "main.h"

/**
 * print_line - print underscores
 * Description - function to draw a straight line
 * @n: the number of lines to draw
 * Return - void
 */
void print_line(int n)
{
	int i;

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
