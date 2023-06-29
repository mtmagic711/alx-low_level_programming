#include "main.h"

/**
* reverse_array - reverse numbers in an array.
* @a: the array given.
* @n: the number of the elements.
* Return: always 0.
*/

void reverse_array(int *a, int n)
{
int i, j;
int temp;

i = 0;
j = n - 1;

while (i < (n / 2))
{
	temp = *(a + i);
	*(a + i) = *(a + j);
	*(a + j) = temp;
	i++;
	j--;
}
}
