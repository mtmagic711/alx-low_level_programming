#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - multi two numbers passed in the arguments.
* @argc: args counter.
* @argv: an array of strings.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc < 3 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
