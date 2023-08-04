#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies strings
 * Description: function that copies the string from
 * one memory address to another
 * @dest: address to be copied to
 * @src: address to be copied from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}

	return (dest);
}
