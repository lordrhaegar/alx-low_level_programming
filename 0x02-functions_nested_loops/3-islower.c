#include <stdio.h>
#include "main.h"

/**
 * main - the entry of the program
 * Description - runs _islower() function
 * Return: On success 0.
 */
int main(void)
{
	int r;

	r = _islower('A');
	_putchar(r + '0');
	r = _islower('a');
	_putchar(r + '0');
	r = _islower('B');
	_putchar(r + '0');
	r = _islower('b');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

/**
 * _islower - lowercase checker
 * Description - checks if a character is lowercase
 * @c: The character to check
 * Return: returns 0 if character is uppercase and 1 if character is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}

	return (0);
}
