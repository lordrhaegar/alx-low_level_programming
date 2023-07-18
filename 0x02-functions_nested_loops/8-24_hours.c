#include <stdio.h>
#include "main.h"

/**
 * main - the entry of the program
 * Description - runs print_last_digit function
 * Return: On success 0.
 */
int main(void)
{
	jack_bauer();

	return (0);
}

/**
 * jack_bauer - 24 hours
 * Description - prints every minute of the day
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int mins = 0;
	int hrs = 0;
	while (hrs < 24)
	{
		while (mins < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hrs++;
		mins = 0;
	}
}
