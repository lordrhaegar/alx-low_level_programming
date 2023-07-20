#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks digit
 * Description - checks if a number is a digit
 * @c: the character to check
 * Return: 1 if its a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
