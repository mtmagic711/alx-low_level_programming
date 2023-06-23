#include "main.h"

/**
* more_numbers - print numbers 10 times.
*
* Return: Always 0.
*/

void more_numbers(void)
{
int i, j;

i = 0;
while (i < 10)
{
for (j = 0; j <= 14; j++)
{
	if (j >= 10)
	{
	_putchar('0' + j / 10);
	}
	_putchar('0' + j % 10);
}
i++;
_putchar('\n');
}
}
