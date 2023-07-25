#include <stdio.h>
#include "main.h"
#include <stdlid.h>
#include <time.h>

/**
 * main - th eentry point of the program
 * Description - Generates random password
 * Return: Always 0
 */
int main(void)
{
	char *s;
	char pass[10];
	int i;
	int num;
	int a;

	srand(time(0));
	s = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 10; i++)
	{
		num = indexGenerator(25, 0);
		pass[i] = s[num];
	}
	for (a = 0; a < 10; a++)
	{
		printf("%c", pass[a]);
	}
	putchar('\n');

	return (0);
}

/**
 * indexGenerator - 
 * Description -
 * @u:
 * @l:
 * Return:
 */
int indexGenerator(int u, int l)
{
	int num;

	num = (rand() % (u - l + 1)) + l;

	return (num);
}
