#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse array
 * Description - reverses the content of an array of integers
 * @a: pointer to the array of characters
 * @n: the numnber of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	int j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
