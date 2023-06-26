#include "main.h"
#include <stdio.h>

/**
* print_array - print an array.
* @a: the firste element in the array.
* @n: the numbers of elements.
* Return: Always 0.
*/

void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
	printf("%d", *(a + i));
	if (i != (n - 1))
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
}
