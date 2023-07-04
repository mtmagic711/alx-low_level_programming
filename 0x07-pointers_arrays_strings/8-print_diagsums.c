#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  the sum of the two diagonals of a square matrix.
* @a: the matrx.
* @size: number of the size .
* Return:
*/

void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
i = sum1 = sum2 = 0;

while (i < size)
{
	sum1 += a[(size * i) +i];
	sum2 += a[(size * (i + 1)) - (i + 1)];
	i++;
}
printf("%d, %d\n", sum1, sum2);
}
