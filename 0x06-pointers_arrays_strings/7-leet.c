#include <stdio.h>
#include "main.h"

/**
 * leet - ecodes string
 * Description: encodes a string into 1337
 * @n: the string to be encoded
 * Return: pointer to the string
 */
char *leet(char *n)
{
	int i, k, j, l;

	k = 0;
	l = 0;
	char c[] = "AEOTL";
       	char d[] = "43071";
	while (n[k] != '\0')
	{
		k++;
	}
	while (c[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (n[i] == c[j] || n[i] == (c[j] + 32))
			{
				n[i] = d[j];
			}
		}
	}
	return (n);
}
