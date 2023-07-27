#include <stdio.h>
#include "main.h"

/*
 * strcmp - compare two strings
 * Description - function compares the two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 0, if the s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, r;

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		for (k = 0; k < i; k++)
		{
			r = check(s1[k], s2[k]);
			if (r != 0)
			{
				break;
			}
		}
	}
	if (j >= i)
	{
		for (k = 0; k < j; k++)
		{
			r = check(s1[k], s2[k]);
			if (r != 0)
			{
				break;
			}
		}
	}

	return (r);
}

/**
 * check - compare characters
 * Description - compares two characters
 * @a: first character to compare
 * @b: second charater to compare
 * Return: 0, if the characters are same
 * positive or negative number if not same
 */
int check( char a, char b)
{
	if (a != b)
	{

		return (a - b);
	}
	else
	{

		return (0);
	}
}
