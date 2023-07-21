#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point of the program
 * Description - prints fixz for 3's multiples
 * and Buzz for 5's multiples
 * and FizzBuzz for both
 * Return - Returns 0 on success
 */
int main(void)
{
	int i;
	
	for (i == 1; i <= 100; i++)
	{
		if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz");
			i != 100 ? putchar(' ') : putchar('\n');
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			i != 100 ? putchar(' ') : putchar('\n');
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			i != 100 ? putchar(' ') : putchar('\n');
		}
		else
		{
			printf("%d", i);
			i != 100 ? putchar(' ') : putchar('\n');
		}
	}
}
