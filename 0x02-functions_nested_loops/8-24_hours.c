#include <stdio.h>
#include "main.h"

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
