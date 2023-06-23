#include "main.h"

/**
* print_most_numbers - except 2 and 4.
*
* Return: always 0.
*/

void print_most_numbers(void)
{
char i;

i = '0';
while (i <= '9')
{
if (i == '2' || i == '4')
{
	i++;
}
	_putchar(i);
	i++;
}
_putchar('\n');
}
