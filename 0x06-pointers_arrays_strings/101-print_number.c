#include <stdio.h>
#include "main.h"

/**
 * print_number - print number
 * Description: function to print integers
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int r, i, k;
	int a[100];

	i = 0;
	k = 0;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		r = n % 10;
		a[i] = r;
		n /= 10;
		i++;
	}
	while (k < i)
	{
		_putchar(a[i - 1] + '0');
		i--;
	}
}
