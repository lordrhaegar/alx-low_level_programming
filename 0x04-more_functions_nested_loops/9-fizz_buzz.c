#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * Description - prints fixz for 3's multiples
 * and Buzz for 5's multiples
 * and FizzBuzz for both
 * Return:  0 on success
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("%s", "FizzBuzz");
			i != 100 ? putchar(' ') : putchar('\n');
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
			i != 100 ? putchar(' ') : putchar('\n');
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
			i != 100 ? putchar(' ') : putchar('\n');
		}
		else
		{
			printf("%d", i);
			i != 100 ? putchar(' ') : putchar('\n');
		}
		i++;
	}

	return (0);
}
