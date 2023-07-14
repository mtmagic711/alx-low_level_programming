#include "main.h"
#include <stdlib.h>

/**
* array_range - range numbers.
* @min: the smallest nm.
* @max: the largest nm.
* Return: the numbers in order.
*/

int *array_range(int min, int max)
{
int *array;
int ln;
int i = 0;

if (min > max)
	return (NULL);
ln = max - min + 1;
array = malloc(ln * sizeof(int));
if (array == NULL)
	return (NULL);
while (array[i] < ln)
{
	array[i] = min++;
	i++;
}
return (array);
}
