#include "main.h"

/**
* puts2 - print every other character.
* @str: the giving string.
* Return: Always 0.
*/

void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
	_putchar(*(str + i));
	i += 2;
}
_putchar('\n');
}
