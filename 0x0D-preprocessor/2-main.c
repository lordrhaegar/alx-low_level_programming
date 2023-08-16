#include <stdio.h>

/**
 * main - main entry of program
 * Description - program that prints the
 * name of the file it was compiled from
 * Returns: void
 */
int main(void)
{
	printf("%s\n",__FILE__);

	return (0);
}
