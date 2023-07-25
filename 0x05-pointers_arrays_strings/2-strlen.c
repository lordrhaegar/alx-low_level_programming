#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of string
 * Description: Gets the length of string
 * @s: the string
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++
	}
	return (i);
}
