#include "main.h"

/**
* _strdup - make a copy of the string given as a parameter.
* @str: the given string.
* Return:  a pointer to the duplicated string.
*/

char *_strdup(char *str)
{
	char *array;
	int i = 0, cmp = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
	{
		cmp++;
		i++;
	}

	array = malloc(sizeof(char) * (cmp + 1));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (*(str + i) != '\0')
	{
		*(array + i) = *(str + i);
		i++;
	}

	return (array);
}
