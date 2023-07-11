#include <stdlib.h>
#include "main.h"

/**
* _strdup - return a duplicate string.
* @str: the string giving.
* Return: the string.
*/

char *_strdup(char *str)
{
char *array;
int i = 0, cmp = 0;

if (str == NULL)
	return (NULL);
else
{
	while (*(str + cmp) != '\0')
		cmp++;
}
array = malloc(sizeof(char) * (cmp + 1));
if (array == NULL)
	return (NULL);
else
{
	while (*(str + i))
	{
		array[i] = str[i];
		i++;
	}
}
return (array);
}

