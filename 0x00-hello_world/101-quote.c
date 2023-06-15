#include <unistd.h>

/**
 * main - Print a quote without printf and puts
 *
 * Return: The value 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
