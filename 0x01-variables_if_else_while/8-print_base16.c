#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints numbers of base 16 in lowercase
 *
 * Return: 0 on successful execution
 */
int main(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                putchar(i + '0');
        }

        for (i = 0; i < 6; i++)
        {
                putchar(i + 'a');
        }

        putchar('\n');

        return 0;
}

