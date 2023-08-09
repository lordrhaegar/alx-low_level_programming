#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - crates array
 * Description - creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: initializing char
 * Return: NULL if size is 0 or it fails
 * return pointer to the array if it succeds
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (p == NULL || size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
