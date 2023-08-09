#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate
 * Description - concatenates 2 strings
 * @s1: frist string
 * @s2: second string
 * Return: pointer to a newly
 * allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, size;
	char *p;

	i = j = l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	size = i + j;
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		if (k >= i)
		{
			p[k] = s2[l];
			l++;
		}
		else
		{
			p[k] = s1[k];
		}
		p[size] = '\0';
	}
	return (p);
	free(p);
}
