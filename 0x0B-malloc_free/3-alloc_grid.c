#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - 2 dimensional array of integers.
* @height: the height of the array.
* @width: the width of the array.
* Return: the array.
*/

int **alloc_grid(int width, int height)
{
int **array;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
	return (NULL);
else
{
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] != NULL)
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
	}
}
return (array);
}
