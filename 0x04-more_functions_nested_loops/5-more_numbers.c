#include <stdio.h>
#include "main.h"

/**
 * more_numbers -prints numbers
 * Description - prints 10 times the numbers, from 0 to 14
 * Return - On success 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			print(j);
		}
		_putchar('\n');
	}
}

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
		_putchar(digits[j] + '0');
	}
}
