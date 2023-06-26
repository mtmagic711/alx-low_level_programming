#include "main.h"

/**
* print_rev - print a giving string in reverse.
* @s: the givivng string>
* Return: Always 0.
*/

void print_rev(char *s)
{
int i = 0;

while (*(s + i))
{
	i++;
}
i--;
while (i >= 0)
{
	_putchar(*(s + i));
	i--;
}
_putchar('\n');
}
