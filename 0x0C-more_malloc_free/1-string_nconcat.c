#include "main.h"

/**
* string_nconcat - concatenates two strings.
* @s1: the first string.
* @s2: the second string.
* @n: number of char from s2.
* Return: a pointer to newly allocated space.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int cmp = 1;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + cmp) != '\0')
		cmp++;
	if (n >= cmp)
		n = cmp;

	array = malloc(sizeof(char) * (i + n + 1));
	if (array == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		array[j] = s1[j];

	i = 0;
	while (i <= n)
	{
		array[j] = s2[i];
		i++;
		j++;
	}
	array[j] = '\0';
	return (array);
}
