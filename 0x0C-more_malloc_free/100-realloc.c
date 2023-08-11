#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate memory
 * Description - reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory previously
 * allocated
 * @old_size: size, in bytes, of the
 * allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: ptr if new_size equaals old_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, s;
	char *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	s = old_size < new_size ? old_size : new_size;
	for (i = 0; i < s; i++)
		(char *)p[i] = (char *)ptr[i];
	free(ptr);
	return (p);
}
