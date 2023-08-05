#include <stdio.h>

/**
 * main - main entry of the program
 * Description - program that prints the
 * number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	argc = -1;
	for (i = 0; argv[i] != NULL; i++)
	{
		argc++;
	}
	printf("%d\n", argc);

	return (0);
}
