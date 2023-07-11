#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: the first string.
* @s2: the second string.
* Return: The two strings.
*/

char *str_concat(char *s1, char *s2)
{
char *str;
int i = 0, cmp = 0;
int j = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (*(s1 + i) != '\0' || *(s2 + i))
{
	cmp++;
	i++;
}
str = malloc(sizeof(char) * (cmp));
if (str == NULL)
	return (NULL);
else
{
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		str[i++] = s2[j];
}
return (str);
}
