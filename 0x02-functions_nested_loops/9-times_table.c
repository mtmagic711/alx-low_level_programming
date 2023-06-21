#include "main.h"

/**
* times_table - print the 9 times table.
*
* Return: void.
*/

void times_table(void)
{
int i = 0, j = 0, mul;
while (i <= 9)
{
while (j <= 9)
{
	mul = i * j;
if (mul >= 10 && j < 9)
{
	_putchar(mul / 10 + '0');
	_putchar(mul % 10 + '0');
	_putchar(',');
	_putchar(' ');
}
else if (mul < 10 && j < 9)
{
	_putchar(mul + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
	j++;
}
j = 0;
_putchar('\n');
i++;
}
}
