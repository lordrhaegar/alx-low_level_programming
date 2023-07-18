#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Description - Prints the alphabet, in lowercase
 * Return: on Success 0.
 */

int main(void)
{
	print_alphabet_x10();

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
}

/**
 * print_alphabet_x10 - function to print alphabets
 * Description - Prints the alphabets in lowercase 10 times
 * Return: Returns nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
