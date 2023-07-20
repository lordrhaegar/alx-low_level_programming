#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  print diagonal
 * Description - function to print a diagonal line
 * @n: the number of lines
 * Return - void
 */
void print_diagonal(int n)
{
	int i;

	if (i != 0 && i > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
		}
		_putchar('\\');
		if (i != (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
