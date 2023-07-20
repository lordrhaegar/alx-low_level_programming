#include <stdio.h>
#include "main.h"
/**
 * _isupper - Uppercase
 * Description - checks if a number is uppercase
 * @c: the number to be checked
 * Return: 1 is its uppercase and 0 othewise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
