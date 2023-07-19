#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Last digit
 * Description - prints the last digits of a number
 * @n: The number to get its last digit
 * Return: Returns the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n == INT_MIN)
	{
		_putchar(8 + '0');
		return (8);
	}
	n = n < 0 ? -n : n;
	ld = n % 10;
	_putchar(ld + '0');

	return (ld);
}
