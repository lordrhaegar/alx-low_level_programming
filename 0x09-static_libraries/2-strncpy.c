#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies strings
 * Description: function that copies the string from
 * one memory address to another
 * @dest: address to be copied to
 * @src: address to be copied from
 * @n: number of bytes to be copied from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
