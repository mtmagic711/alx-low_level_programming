#include "main.h"
#include <stdio.h>

/**
* _puts - print a string followed by a new line.
* @str: the string given.
* Return: Always 0.
*/

void _puts(char *str)
{
int i = 0;

while (*(str + i))
{
	_putchar(*(str + i));
	i++;
}
_putchar('\n');
}
