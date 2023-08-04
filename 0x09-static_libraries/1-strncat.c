#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate
 * Description: joins two strings together
 * @dest: string being appended to
 * @src: string being appended
 * @n: number of bytes to get from src
 * Return: Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
