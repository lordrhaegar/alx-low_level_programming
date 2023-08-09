#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy
 * Description - duplicate of the string str
 * @str: duplicated string
 * Return: Returns NULL if str = NULL
 * returns a pointer to the duplicated string
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	p = (char *) malloc((sizeof(char) * i) + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
	free(p);
}
