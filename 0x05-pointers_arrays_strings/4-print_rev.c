#include <stdio.h>
#include "main.h"

/**
 * print_rev - print reverse
 * Description: prints strings in reverse
 * @s: the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
