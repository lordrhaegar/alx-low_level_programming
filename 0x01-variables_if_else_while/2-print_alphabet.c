#include <stdio.h>

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
                putchar(i);
        }
        putchar('\n');

	return (0);
}
