#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * Description: prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", mul);

	return (0);
}
