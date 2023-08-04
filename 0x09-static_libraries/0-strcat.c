#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate
 * Description: joins two strings together
 * @dest: string being appended to
 * @src: string being appended
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
