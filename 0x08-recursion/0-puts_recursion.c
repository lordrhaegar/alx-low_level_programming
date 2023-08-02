#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * Description - using recursion to print a string
 * @s: pointer to the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
