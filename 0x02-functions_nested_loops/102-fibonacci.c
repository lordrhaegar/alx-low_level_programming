#include <stdio.h>
#include <stdlib.h>

/**
 * main - the programs entry point
 * Description - print first 50 fabonacci numbers
 * starting with 1 and 2
 * Return: On success 0 
 */

int main(void)
{
	long digits[50];
	digits[0] = 1;
	digits[1] = 2;
	int j = 2;
	int i;

	for (i = 2; i < 50; i++)
	{
		digits[i] = digits[(i - 2)] + digits[(i - 1)];
		j++;
	}
	printf("%ld", digits[0]);
	for (i = 1; i <= j; i++)
	{
		printf("%ld, ", digits[i]);
		if (i == j)
		{
			printf("%ld\n", digits[i]);
		}
	}
}
