#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints all possible 
 * different combinations of two digits.
 * Return: the function returns zero
 */
int main(void)
{
        int n = 48;
        int i;
        int j;


        for (i = n; i <= 56; i++)
        {
                for (j = ++n; j<= 57; j++)
                {
                        putchar(i);
                        putchar(j);
                        if (i != 56)
                {
                        putchar(',');
                        putchar(' ');
                }

                }

        }
        putchar('\n');

        return (0);
}
