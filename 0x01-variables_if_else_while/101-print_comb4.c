#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints all possible 
 * different combinations of three digits.
 * Return: the function returns zero
 */
int main(void)
{
        int i;
        int j;
	int k;

        for (i = 48; i <= 55; i++)
        {
                for (j = i + 1; j<= 56; j++)
                {
			for (k = j + 1; k<=57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
                }

        }
        putchar('\n');

        return (0);
}
