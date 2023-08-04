#include <stdio.h>
#include "main.h"

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
