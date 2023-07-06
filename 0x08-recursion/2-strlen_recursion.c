#include "main.h"

/**
* _strlen_recursion -  the length of a string.
* @s: the giving string.
* Return: Always 0;
*/

int _strlen_recursion(char *s)
{
int i = 0;
while (*s)
{
	i++;
	s++;
	_strlen_recursion(s);
}
return (i);
}
