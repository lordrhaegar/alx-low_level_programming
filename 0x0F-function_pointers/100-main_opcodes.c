#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - opcodes
 * Description - print the opcodes of this program
 * @a: pointer to the main function
 * @n: number of bytes
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - main entry of the program
 * @argc: number of cpommand line args
 * @argv: pointer to array of command line args
 * Return: Always O
 */
int main(int argc, char **argv)
{
	int c;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, c);
	
	return (0);
}
