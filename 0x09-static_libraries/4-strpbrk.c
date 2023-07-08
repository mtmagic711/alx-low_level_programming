#include "main.h"
#include <stdlib.h>

/**
* _strpbrk -  searches a string for any .
* @s: the giving string.
* @accept: the substring.
* Return: a pointer to s.
*/

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		return (s);
	}
	s++;
}
return (NULL);
}
