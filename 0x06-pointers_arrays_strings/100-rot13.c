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
	int i, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (n[i] == c[j])
			{
				n[i] = d[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
