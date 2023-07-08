#include "main.h"
#include <stdlib.h>

/**
* _strchr - search for a character.
* @s: the strin.
* @c: the character to locate.
* Return: the first occ if found.
*/

char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i])
{
	if (s[i] == c)
		return (s + i);
	i++;
}
return (NULL);
}
