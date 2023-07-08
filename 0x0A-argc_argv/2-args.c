#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
while (argc--)
{
	printf("%s\n", *argv++);
}
return (0);
}
