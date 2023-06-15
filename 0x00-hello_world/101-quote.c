#include <unistd.h>

/**
 * main - Print a quote without printf and puts
 *
 * Return: The value 1
 */
int main(void)
{
char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quot, sizeof(quot));
	return (1);
}
