#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - action
 * Description - runs action of each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: call-back function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
