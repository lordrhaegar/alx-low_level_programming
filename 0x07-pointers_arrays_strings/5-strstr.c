#include <stdio.h>
#include "main.h"

/**
 * _strstr - needle in haystack
 * Description - function finds the first occurrence
 * of the substring needle in the string haystack
 * @haystack: the string to be checked
 * @needle: the string to be located in haystack
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (!(*n))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
