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
	int i, add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		add += atoi(argv[i]);
	}
	if (argc == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", add);
	}

	return (0);
}
