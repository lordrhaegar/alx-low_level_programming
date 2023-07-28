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

	i = 0;
	k = 0;
	r = 0;
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
		r = r * 10 + (n % 10);
		n /= 10;
	}
	while (r > 0)
	{
		_putchar((r % 10) + '0');
		r /= 10;
	}
}
