#include <stdio.h>
#include "main.h"

/**
 * string_toupper - uppercase
 * Description: converts to uppercase
 * @n: string to convert
 * Return: pointer to the string
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
		i++;
	}
	return (n);
}
