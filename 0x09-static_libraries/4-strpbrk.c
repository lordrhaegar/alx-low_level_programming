#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - check for bytes
 * Description - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: string to check
 * @accept: string to locate in s
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
