#include <stdio.h>
#include <string.h>
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
	char c[] = "AEOTL";
	char d[] = "43071";

	for (i = 0; i < strlen(n); i++)
	{
		for (j = 0; j < strlen(c); j++)
		{
			if (n[i] == c[j] || n[i] == (c[j] + 32))
			{
				n[i] = d[j];
			}
		}
	}
	return (n);
}
