#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle
 * Description - prints triangle with specified length
 * @size: the length of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = i - 1; j < size - 1; j++)
		{
			_putchar(' ');
		}
		print_hash(i);
		_putchar('\n');
	}
}

/**
 * print_hash - prints #
 * Description - prints the number of hashes passed in
 * @hash: number of hash to be printed
 * Return: void
 */
void print_hash(int hash)
{
	int i;

	for (i = 0; i < hash; i++)
	{
		_putchar('#');
	}
}
