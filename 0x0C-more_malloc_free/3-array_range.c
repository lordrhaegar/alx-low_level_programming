#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - array of inegers
 * Description - function that creates an array of integers
 * @min: start of array range
 * @max: end of array range
 * Return: NULL If malloc fails
 * or If min > max
 * or pointer to the new array
 */
int *array_range(int min, int max)
{
	int r, i;
	int *p;

	r = (max - min) + 1;
	p = malloc(sizeof(int) * r);
	if (p == NULL || min > max)
		return (NULL);
	for (i = 0; i < r; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
