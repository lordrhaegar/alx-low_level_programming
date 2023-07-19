#include <stdio.h>
#include "main.h"

/**
 * print - print numbers
 * Description - print numbers using _putchar function
 * @n: number to print
 * Return - void
 */

void print(int n)
{
	int digits[100];
	int j;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		digits[i] = n % 10;
		n /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (i == 1)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			i = 0;
		}
		if (i == 2)
		{
			_putchar(' ');
			_putchar(' ');
			i = 0;
		}
		if (i == 3)
		{
			_putchar(' ');
			i = 0;
		}
		_putchar(digits[j] + '0');
	}
}

/**
 * print_times_table - print times table
 * Description - print times table from 0 - n
 * @n: the number of times table to be printed
 * Return - void
 */
void print_times_table(int n)
{
	int j;
	int i = 0;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				print(i * j);
				if (j != n)
				{
					_putchar(',');
				}
				if (i == 0 && j != n)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
