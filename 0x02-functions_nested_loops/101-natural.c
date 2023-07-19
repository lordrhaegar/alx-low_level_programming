#include <stdio.h>
#include <stdlib.h>

/**
 * main - the programs entry point
 * Description: prints sum of the multiples of 3 or 5 below 1024 (excluded)
 * Return: On Success 0
 */
int main(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			n += i;
		}
	}
	printf("%d", n);

	return (0);
}
