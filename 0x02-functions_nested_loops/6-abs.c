#include <stdio.h>
#include "main.h"

/**
 * main - the entry of the program
 * Description - runs _abs function
 * Return: On success 0.
 */
int main(void)
{
	int r;
	int digit[100];
	int i = 0;
	int j;

	r = _abs(-1000);
	while (r > 0)
	{
		digit[i] = r % 10;
		r /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digit[j] + '0');
	}
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

/**
 * _abs - Absolute value
 * Description - gets the absolute value of any number
 * @n: The number to get its absolute value
 * Return: returns the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
	{
		return (n);
	}
}
