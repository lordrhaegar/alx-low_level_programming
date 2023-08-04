#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate character in string
 * Description - locates the first occurrence of
 * c (converted to a char) in the string pointed to by s.
 * @s: pointer to string
 * @c: character being searched for
 * Return: return a pointer to the located
 * character, or NULL iIf the character
 * does not appear in the string.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == s[i])
	{
		return (&s[i]);
	}
	return (NULL);
}
