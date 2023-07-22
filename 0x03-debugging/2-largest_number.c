#include <stdio.h>
#include "main.h"

/**
 * largest_number -gets largest number
 * Description - Check for largest number
 * Return: The largest of the 3 numbers
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
