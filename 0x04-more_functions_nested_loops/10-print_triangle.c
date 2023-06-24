#include "main.h"

/**
* print_triangle - a triengle using #.
* @size: the input.
* Return: Always 0.
*/

void print_triangle(int size)
{
int i, j, l;

j = 1;
l = 0;
for (i = 0; i < size; i++)
{
	j = l;
	while ((size - j)-1 > 0)
	{
		_putchar(' ');
		j++;
	}
	j = l;
	while (j >= 0)
		{
		_putchar('#');
		j--;
		}
	l++;
	_putchar('\n');
}
}
