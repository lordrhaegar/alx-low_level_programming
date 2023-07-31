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
	int i, j, k;

	i = k = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
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
	if (accept[i] == '\0')
	{
		k++;
	}
	return (k);

}
