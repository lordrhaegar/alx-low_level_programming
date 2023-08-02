#include <stdio.h>
#include "main.h"

/**
 * primer - checks for primes
 * Description - checks if a number is prime
 * @i: divider
 * @n: number
 * @c: counter
 * Return: the number of divisors
 */
int primer(int i, int n, int c)
{
	if (i > n)
	{
		return (c);
	}
	if (n % i == 0)
	{
		c++;
	}
	return (primer(i + 1, n, c));
}

/**
 * is_prime_number - checks value returned from primer
 * Description - checks value returned from primer
 * @n: number to use in primer
 * Return: 0 if number is not prime
 * 1, if number is prime
 */
int is_prime_number(int n)
{
	int a;

	a = primer(1, n, 0);
	if (a == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
