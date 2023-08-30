#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: the given string.
* Return: the length
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*(s + len) == '\0')
		return (0);
	len++;
	return (len + _strlen_recursion(s + len));
}
