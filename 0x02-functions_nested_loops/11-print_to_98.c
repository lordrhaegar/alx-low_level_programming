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
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
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
 * print_to_98 - print numbers
 * Description - print numberas from n to 98
 * @n: number to start printing from
 * Return - void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		print(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
