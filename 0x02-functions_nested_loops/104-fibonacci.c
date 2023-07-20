#include <stdio.h>
#include "main.h"

/**
 * print - print numbers
 * Description - print numbers using _putchar function
 * @n: number to print
 * Return - void
 */
int main(void)
{
	fabonacci(1,2);
	return (0);
}
void printer(unsigned long n)
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
		_putchar(digits[j] + '0');
	}
}

/**
 * times_table - print times table
 * Description - print times table from 0 - 9
 * Return - void
 */
void fabonacci(unsigned long a, unsigned long b)
{
	unsigned long i;
	unsigned long result;

	printer(a);
	_putchar(',');
	_putchar(' ');
	printer(b);
	_putchar(',');
	_putchar(' ');
	for (i = 0; i < 98; i++)
	{
		result = a + b;
		printer(result);
		if (i != 97)
		{
			_putchar(',');
			_putchar(' ');
		}
		temp = a;
		a = b;
		b = result;
	}
	_putchar('\n');
}
