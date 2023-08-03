#include <stdio.h>
#include "main.h"

/**
 * sizer - length
 * Description - gets the length
 * @s: pointer to a char
 * Return: a recursion
 */
int sizer(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + sizer(++s));
}

/**
 * pchecker - check palindrome
 * Description - hcecks fpr a palindrome
 * @s: string pointer
 * @i: index
 * Return: 1 if is palindrome, 0 if not
 */
int pchecker(char *s, int i)
{
	if (i < 1)
	{
		return (1);
	}
	if (*s == *(s + i))
	{
		return (pchecker(s + 1, i - 2));
	}
	return (0);
}

/**
 * is_palindrome - palidome
 * Description - checks if is a palindrome
 * @s: string pointer
 * Return: a recursion
 */
int is_palindrome(char *s)
{
	int size;

	size = sizer(s);
	return (pchecker(s, size - 1));
}
