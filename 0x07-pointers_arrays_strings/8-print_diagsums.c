#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum diagonal
 * Desccription - prints the sum of the diagonal
 * of a square matrix
 * @a: pointer to first row
 * @size: number of roows of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, c, i;

	b = 0;
	c = 0;
	for (i = 0; i < size; i++)
	{
		b += a[i * size + i];
		c += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", b, c);
}
