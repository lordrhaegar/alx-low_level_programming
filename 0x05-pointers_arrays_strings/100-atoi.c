#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string
 * Description: takes a string and converts it into an integer
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int r;

	i = 0;
	sign = 1;
	r = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
			i++;
		}
		else if (*(s + i) == '+' || *(s + i) == ' ')
		{
			i++;
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			r = r * 10 + (*(s + i) - '0');
			i++;
		}
		else
		{
			i++;
		}
	}

	return (sign * r);
}
