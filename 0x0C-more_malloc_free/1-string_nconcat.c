#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings.
* @s1: string 1.
* @s2: string 2.
* Return: a fuul string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int cmp1 = 0;
int cmp2 = 0;
int i = 0;
char *ptr;

if (s1 == NULL)
	return (NULL);
else
{
	while (s1[cmp1])
		cmp++;
}
if (s2 == NULL)
	return (NULL);
else
{
	while (s2[cmp2])
		cmp2++;
	if (cmp2 > n)
			cmp2 = n;
}
ptr = malloc(sizeof(char) * (cmp1 + cmp2 + 1));
if (ptr == NULL)
	return (NULL);
else
{
	while (*(s1 + i) != '\0')
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	for (j = 0; j < cmp2; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	*(ptr + i) = '\0';
}
return (ptr);
}

