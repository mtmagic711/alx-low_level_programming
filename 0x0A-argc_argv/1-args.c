#include "main.h"
#include <stdio.h>

/**
* main - prtint the number of arguments.
* @argc: the number of arguments.
* @argv: an array of strings.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
