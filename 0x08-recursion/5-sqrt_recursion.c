#include <stdio.h>
#include "main.h"

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

int _sqrt_recursion(int n)
{
	return (root(1, n));
}
