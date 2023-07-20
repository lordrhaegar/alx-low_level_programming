#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * Description - runs fizzBuzz
 * Return - Returns 0 on success
 */
int main(void)
{
	fizzBuzz();

	return (0);
}

/**
 * fizzBuzz - prints fizz Buzz
 * Description - prints numbers, fizz, buzz
 * and fizzbuzz
 * Return - void
 */
void fizzBuzz(void)
{
	int i;

	for (i == 1; i <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
