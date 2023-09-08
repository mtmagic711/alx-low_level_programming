#include "main.h"

/**
* _calloc -  allocates memory for an array.
* @nmemb: elements.
* @size: size of bytes.
* Return: NULL if malloc fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
