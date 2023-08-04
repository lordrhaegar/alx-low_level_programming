#include <stdio.h>
#include "main.h"

/**
 * _strspn - span a string
 * Description - spans the initial part of the null-terminated
 * string s as long as the characters from s occur
 * in the null-terminated string charset.
 * @s: null-terminated string
 * @accept: characters to check for
 * Return: returns the number of characters spanned
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l, m;

	i = k = l = m = 0;
	while (accept[l] != '\0')
	{
		l++;
	}
	while (s[m] != '\0')
	{
		m++;
	}
	while (i <= l)
	{
		j = 0;
		while (j <= m)
		{
			if (accept[i] == s[j])
			{
				k++;
				break;
			}
			j++;
		}
		i++;
	}
	return (k);

}
