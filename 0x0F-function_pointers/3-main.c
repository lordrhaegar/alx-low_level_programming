#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point o fthe program
 * @argc: number or arguments
 * @argv: argument array
 * Return: On succesful 0
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	char op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		return (99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = f(a, b);
	printf("%d\n", r);

	return (0);
}
