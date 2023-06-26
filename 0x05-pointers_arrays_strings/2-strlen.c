#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - counting the length of string.
* @s: the given string.
* Return: the length.
*/

int _strlen(char *s)
{
int i = 0;

while (*(s + i))
{
	i++;
}
return (i);
}
