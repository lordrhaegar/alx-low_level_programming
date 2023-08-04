#include <stdio.h>
#include "main.h"

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
