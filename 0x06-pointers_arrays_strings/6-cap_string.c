#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalize
 * Description - Capitalizes a string
 * @n: the string to be capitalized
 * Return: pointer to the capitalized string
 */
char *cap_string(char *n)
{
	int i, k;

	k = 0;
	while (n[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i++)
	{
		if (n[0] >= 97 && n[i + 1] <= 122)
		{
			n[0] -= 32;
		}
		if (n[i] == ',' || n[i] == ';' || n[i] == '.'
				|| n[i] == '!' || n[i] == '?'
				|| n[i] == '"' || n[i] == '('
				|| n[i] == ')' || n[i] == '{'
				|| n[i] == '}' || n[i] == '\t'
				|| n[i] == '\n' || n[i] == ' ')
		{
			if (n[i + 1] >= 97 && n[i + 1] <= 122)
			{
				n[i + 1] -= 32;
			}
		}
	}

	return (n);
}
