#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory
 * Description: function that allocates memory for an array
 * @nmemb: number of elements n array
 * @size: element byte size
 * Return: pointer to the allocated memory or
 * NULL If malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *ptr;
	unsigned int i, m;

	m = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(m);
	if (p == NULL)
		return (NULL);
	ptr = (char *)p;
	for (i = 0; i < m; i++)
		ptr[i] = 0;
	return (ptr);
}
