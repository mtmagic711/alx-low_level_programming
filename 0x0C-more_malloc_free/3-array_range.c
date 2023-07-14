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
int total;
int i = 0;

if (min > max)
	return (NULL);
total = max - min + 1;
array = malloc(total * sizeof(int));
if (array == NULL)
	return (NULL);
for (i = 0; i <= total; i++)
	array[i] = min++;
return (array);
}
