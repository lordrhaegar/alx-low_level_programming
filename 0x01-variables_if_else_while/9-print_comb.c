#include <stdio.h>

/**
 * main - the program entry point
 * Description: Prints numbers sparated with commas and spaces
 * Return: the function returns zero
 */
int main(void)
{
        int i;

        for (i = 48; i <= 57; i++)
        {
                putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
        }
        putchar('\n');

	return (0);
}
