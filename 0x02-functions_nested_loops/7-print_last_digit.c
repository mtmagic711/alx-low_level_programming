#include "main.h"

/**
* print_last_digit - the last digit.
* @n: the number given.
* Return: the last digit of n.
*/

int print_last_digit(int n)
{
	int lst = 1;

if (n < 0)
{
	lst *= -1;
}
	 lst *= n % 10;
	_putchar(lst + '0');
	return (lst);
}
