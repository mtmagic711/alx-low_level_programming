#include "main.h"

/**
* print_sign - determin the sign of an integer.
* @c: the entry.
* Return: -1 or 1, in case of 0.
*/
 int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
}
