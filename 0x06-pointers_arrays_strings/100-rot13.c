#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes string
 * Description: encodes a string using rot13
 * @n: the string to be encoded
 * Return: pointer to the string
 */
char *rot13(char *n)
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
