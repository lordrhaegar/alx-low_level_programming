#include <stdio.h>
#include "main.h"

/**
 * add - adds integers
 * Desccription - a function that adds two integers
 * @a: the first integer to be added
 * @b: the second integer to be added
 * Return: returns the sum of the two integers
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
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
	int i = 0;
	int j;

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
	_putchar('\n');
}
