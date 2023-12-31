#include <stdio.h>
#include <stdlib.h>

/**
 * main - the programs entry point
 * Description - print first 50 fabonacci numbers starting with 1 and 2
 * Return: On success 0
 */

int main(void)
{
	long digits[50];
	int i;

	digits[0] = 1;
	digits[1] = 2;
	for (i = 2; i < 50; i++)
	{
		digits[i] = digits[(i - 2)] + digits[(i - 1)];
	}
	printf("%ld, ", digits[0]);
	for (i = 1; i <= 49; i++)
	{
		printf("%ld", digits[i]);
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
