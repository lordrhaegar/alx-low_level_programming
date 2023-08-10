#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate
 * Description - function that concatenates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: Numver of bytes of s2
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l;
	int j, m;
	char *p;

	j = m = 0;
	i = l = 0;
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (s2[i])
		i++;
	if (n >= i)
		n = i;
	while (s1[j])
		j++;
	p = malloc(j + n + 1);
	if (p == NULL)
		return (NULL);
	while (s1[m])
	{
		p[m] = s1[m];
		m++;
	}
	while (l < n)
	{
		p[m + l] = s2[l];
		l++;
	}
	p[m + l] = '\0';
	return (p);
}
