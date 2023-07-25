#include <stdio.h>
#include "main.h"

/**
 * rev_string - print reverse
 * Description: prints strings in reverse
 * @s: the string to be printed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char temp;

	i = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = i - 1;
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
