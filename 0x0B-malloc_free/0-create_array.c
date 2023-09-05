#include "main.h"

/**
* create_array -  creates an array of chars, and initializes it with a char.
* @size: the size of the array.
* @c: the sepial char.
* Return:  a pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
