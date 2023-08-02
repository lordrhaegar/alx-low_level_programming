#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - print length
 * Description: Prints the length of a string
 * @s: pointer to the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		i++;
	}
	if (i <= 0)
	{
		return (0);
	}
	_strlen_recursion(++s);
	return i;
}
