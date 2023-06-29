#include "main.h"

/**
* _strcmp - compare two strings.
* @s1: the first one.
* @s2: the second one.
* Return: 0, or > 0, or < 0.
*/

int _strcmp(char *s1, char *s2)
{
int i;
i = 0;

while (*(s1 + i) != '\0')
{
	if (*(s1 + i) != *(s2 + i))
	{
		return (*(s1 + i)-*(s2 + i));
	}
	i++;
}
return (0);
}
