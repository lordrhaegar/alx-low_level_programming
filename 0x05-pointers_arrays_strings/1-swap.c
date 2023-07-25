#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values
 * Description: takes 2 pointers and swaps their values
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
