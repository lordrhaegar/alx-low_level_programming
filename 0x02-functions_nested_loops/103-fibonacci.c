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
	int n;

	n = 0;
	digits[0] = 1;
	digits[1] = 2;
	for (i = 2; i < 50; i++)
	{
		digits[i] = digits[(i - 2)] + digits[(i - 1)];
	}
	for (i = 0; i < 50; i++)
	{
		if (digits[i] < 4000000)
		{
			n += digits[i];
		}
	}
	printf("%d\n", n);

	return (0);
}
