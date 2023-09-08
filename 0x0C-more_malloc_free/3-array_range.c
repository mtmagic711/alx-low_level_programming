#include "main.h"

/**
* array_range -  creates an array of integers arranged.
* @min: the minumim value.
* @max: the maximum value.
* Return: NULL if it fails.
*/

int *array_range(int min, int max)
{
	int i, cmp, size;
	int *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	cmp = min;
	for (i = 0; i <= size; i++)
	{
		array[i] = cmp;
		cmp++;
	}
	return (array);
}
