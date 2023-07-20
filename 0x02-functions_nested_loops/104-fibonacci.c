#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * Description - runs fabonacci function
 * Return - On success 0
 */
int main(void)
{
	fabonacci(1, 2);
	return (0);
}

/**
 * printer - prints numbers
 * Description: prints numbers using _putchar
 * @n: the number to be printed
 * Return - returns void
 */
void printer(unsigned long n)
{
	int digits[100];
	int j;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		digits[i] = n % 10;
		n /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
	}
}

/**
 * fabonacci - print fabonacci numbers
 * Description - prints first 98 fabonacci numbers
 * @a: the first fabonacci digit
 * @b: the second fabonacci digit
 * Return - void
 */
void fabonacci(unsigned long a, unsigned long b)
{
	int i;
	unsigned long result;

	printer(a);
	_putchar(',');
	_putchar(' ');
	printer(b);
	_putchar(',');
	_putchar(' ');
	for (i = 0; i < 93; i++)
	{
		result = a + b;
		printer(result);
		if (i != 92)
		{
			_putchar(',');
			_putchar(' ');
		}
		a = b;
		b = result;
	}
	_putchar('\n');
}
