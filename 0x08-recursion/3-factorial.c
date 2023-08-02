#include <stdio.h>
#include "main.h"

/**
 * factorial - prints factorials
 * Description: Prints the factorial of any number
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
