#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 1 (to comply with the requirements)
 */
int main(void)
{
	char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, sizeof(message) - 1);

	return (1);
}

