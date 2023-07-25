#include <stdio.h>
#include "main.h"

/**
 * puts_half - print string
 * Description - prints half of a string, followed by a new line
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		if (j < (i / 2))
		{
			continue;
		}
		_putchar(*(str + j));
	}
	_putchar('\n');
}
