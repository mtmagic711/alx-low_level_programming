#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print the sum of numbers passed.
* @argc: args counter.
* @argv: an array of strings.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num = 0;

	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum = sum + num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
