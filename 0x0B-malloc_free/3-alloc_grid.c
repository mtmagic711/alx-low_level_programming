#include "main.h"

/**
* alloc_grid - allocate a 2 dimensional array.
* @width: the width of the array.
* @height: the height.
* Return: a pointer to  2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

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
			if (array[i] == NULL)
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
			else
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
		}
	}

	return (array);
}
