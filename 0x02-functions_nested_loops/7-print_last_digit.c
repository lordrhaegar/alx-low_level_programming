#include <stdio.h>
#include "main.h"

/**
 * main - the entry of the program
 * Description - runs print_last_digit function
 * Return: On success 0.
 */
int main(void)
{
	int r;

	r = print_last_digit(100);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

/**
 * print_last_digit - Last digit
 * Description - prints the last digits of a number
 * @n: The number to get its last digit
 * Return: Returns the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	return (ld);
}
