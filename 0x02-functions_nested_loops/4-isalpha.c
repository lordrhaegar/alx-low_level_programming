#include <stdio.h>
#include "main.h"

/**
 * main - the entry of the program
 * Description - runs _isalpha function
 * Return: On success 0.
 */
int main(void)
{
	int r;

	r = _isalpha('-');
	_putchar(r + '0');
	r = _isalpha('a');
	_putchar(r + '0');
	r = _isalpha('B');
	_putchar(r + '0');
	r = _isalpha('b');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

/**
 * _isalpha - Alphabetical checker
 * Description - checks if a character is alphabetical
 * @c: The character to check
 * Return: returns 0 if character is not alphabetical
 * and returns 1 if character is alphabetical
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
