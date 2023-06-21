#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98.
 * @n: the number to start from.
 * Return: always 0.
 */

void print_to_98(int n)
{
int a = n;

while (a != 98)
	{
if (a < 98)
{
printf("%d, ", a);
a++;
}
else if (a > 98)
{
printf("%d, ", a);
a--;
}
}
printf("%d\n", a);
}
