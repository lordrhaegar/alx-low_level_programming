#include <stdio.h>
#include "main.h"

/**
 * print - print numbers
 * Description - print numbers using _putchar function
 * Return - void
 */

int main(void)
{
	times_table();

	return (0);
}
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
		}
		_putchar(digits[j] + '0');
	}
}

/**
 * times_table - print times table
 * Description - print times table from 0 - 9
 * Return - void
 */
void times_table(void)
{
	int j;

	int i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			print(i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i == 0 && j != 9)
			{
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}	
}
