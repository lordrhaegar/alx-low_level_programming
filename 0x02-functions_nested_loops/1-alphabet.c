#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Description - Prints the alphabet, in lowercase
 * Return: on Success 0.
 */

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - function to print alphabets
 * Description - Prints the alphabets in lowercase
 * Return: Returns nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
