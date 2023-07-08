#include <stdio.h>
#include "main.h"

/**
 * main - entry point. multiplies two numbers
 * @argc: int. argument count
 * @argv: string. argument array
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int mul;

	if (argc > 2)
{
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
else
{
	printf("Error\n");
}
return (1);
}
