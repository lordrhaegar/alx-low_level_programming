#include <stdio.h>
#include "main.h"

/**
 * main - the program entry point
 * Description - This program prints a string
 * Return - The function returns zero
 */

int main(void)
{
	int i = 0;
	char word[] = "_putchar\n";

	while (i < 9)
	{
		_putchar(word[i]);
		i++;
	}

	return(0);
}
