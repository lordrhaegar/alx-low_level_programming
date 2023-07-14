#include <stdio.h>

/**
 * main - the program entry point
 * Description: This function prints alphabets in lowercase followed by uppercase
 * Return: 0 on successful execution
 */
int main(void)
{
        int i;

        for (i = 97; i <= 122; i++)
        {
                putchar(i);
        }
	for (i = 65; i <= 90; i++)
        {
                putchar(i);
        }
        putchar('\n');

	return (0);
}
