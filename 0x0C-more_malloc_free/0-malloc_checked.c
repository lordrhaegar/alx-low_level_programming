#include <stdio.h>
#include <stdlib.h>
include "main.h"

/**
 * malloc_checked - allocate memory
 * Description - function that allocates
 * memory using malloc
 * @b: amount of memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;
       
	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
