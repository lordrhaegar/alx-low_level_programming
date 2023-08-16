#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * Description - function that prints a name.
 * @name: pointer to the string
 * @f: pointer to callback function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
