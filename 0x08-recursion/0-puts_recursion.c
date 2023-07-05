#include "main.h"

/**
* _puts_recursion - puts a string.
* @s: the string giving.
* Return: always 0.
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
	return (0);
putchar(*s);
s++;
_puts_recursion(s);
}
