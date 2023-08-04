#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy memory area
 * Description - copies n bytes from memory area src
 * to memory area dest.
 * @src: memory area being copied from
 * @dest: memory area being copied to
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
