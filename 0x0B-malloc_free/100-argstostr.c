#include "main.h"
#include <string.h>

/**
* argstostr - concatenates all the arguments.
* @ac: number of arguments.
* @av: the commands.
* Return: a string.
*/

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *result;
	int i, j;
	int index = 0;

	if (ac == 0 || av == NULL)
	        return NULL;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
			total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return NULL;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
         		for (j = 0; av[i][j] != '\0'; j++)
         			result[index++] = av[i][j];
		result[index++] = '\n';
		}
	}
	
	result[index] = '\0';
	return result;
}
