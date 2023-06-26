#include "main.h"

/**
* puts_half - print the second half of a string.
* @str: the givin input.
* Return: Always 0.
*/

void puts_half(char *str)
{
int i = 0;
int len;

while (*(str + i))
{
	i++;
}
i--;
len = i / 2;
if (len % 2 == 1)
{
	for (len = i / 2; len <= i; len++)
	{
	_putchar(*(str + len));
	}
}
else
{
	for (len += 1; len <= i; len++)
	{
	_putchar(*(str + len));
	}
}
_putchar('\n');
}
