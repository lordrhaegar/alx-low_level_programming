#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the program entry point
 * Description: This function prints alphabets in lowercase
 * Return: the function returns zero
 */
int main(void)
{
        int i;

        for (i = 97; i <= 122; i++)
        {
		if (i == 101 || i == 113)
		{
			continue;
		}
                putchar(i);
        }
        putchar('\n');

	return (0);
}
