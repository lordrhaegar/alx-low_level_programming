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
	char a[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 26; i++)
        {
                putchar(a[i] + 32);
        }
        putchar('\n');

	return (0);
}
