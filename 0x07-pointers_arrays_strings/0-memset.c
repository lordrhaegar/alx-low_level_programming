#include <stdio.h>
#include "main.h"

/**
 * _memset - pointers and arrays
 * Description - replaces n elements in char *s
 * with char b
 * @n: number of bytes to be replaced
 * @s: array being replaced
 * @b: replacer
 * Return: pointer to the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		char[i] = b;
	}
	return (s);
}
