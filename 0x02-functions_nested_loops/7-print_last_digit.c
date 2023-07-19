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

	n = n < 0 ? -n : n;
	ld = n % 10;

	return (ld);
}
