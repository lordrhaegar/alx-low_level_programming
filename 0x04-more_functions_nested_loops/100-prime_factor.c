#include <stdio.h>

/**
 * main - main entry of the program
 * Description - prints the largest prime factor
 * of the number 612852475143
 * Return - Always 0
 */
int main(void)
{
	long int a;
	long int h;

	a = 612852475143;
	for (h = 2; h < a; h++)
	{
		if (a % h == 0)
		{
			a /= h;
		}
	}
	printf("%ld\n", h);

	return (0);
}
