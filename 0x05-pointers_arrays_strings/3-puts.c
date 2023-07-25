#include <stdio.h>
#include "amin.h"

/**
 * _puts - print string
 * Description: function that prints a string
 * str - the string to be printed
 * Return; void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
