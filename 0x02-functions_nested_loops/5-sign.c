#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints signs
 * Description - checks sign of a number and prints it
 * @n: The number to check
 * Return: returns 1 if number is positive
 * returns 0 if number is zero
 * and returns -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
