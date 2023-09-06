#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: the first string.
* @s2: the second string.
* Return: a new pointer contsins the two strings.
*/

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;

	while (*(s2 + j))
		j++;

	array = malloc(sizeof(char) * (i + j + 1));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(array + i) = *(s1 + i);
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(array + i) = *(s2 + j);
		i++;
		j++;
	}
	return (array);
}
