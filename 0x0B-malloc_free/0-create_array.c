#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it.
* @size: the size of the array.
* @c: the char to initialize with.
* Return: an array of char.
*/

char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i = 0;

if (size == 0)
	return (NULL);
tab = malloc(sizeof(char) * size);
if (tab == NULL)
	return (0);
else
{
	while (i < size)
	{
		tab[i] = c;
		i++;
	}
}
return (tab);
}
