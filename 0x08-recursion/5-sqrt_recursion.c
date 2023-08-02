#include <stdio.h>
#include "main.h"

/**
 * root - sruqreroot check
 * Description - checks for the square root
 * of n
 * @i: number being checked
 * @n: the suare
 * Return: the squareroot
 */
int root(int i, int n)
{
	if (n < 0 || i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (root(i + 1, n));
	}
}

/**
 * _sqrt_recursion - get the squarerrot of a number
 * Description - get the squarerrot of a number
 * @n: the number
 * Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	return (root(1, n));
}
