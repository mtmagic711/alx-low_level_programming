#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array.
* @nmemb: number of elements.
* @size: size of the array.
* Return: Always 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
int i = 0;

if (nmemb == 0 || size == 0)
	return (NULL);
array = malloc(nmemb * size);
if (array == NULL)
	return (NULL);
while (i < nmemb * size)
{
	*(array + i) = 0;
	i++;
}
return (array);
}
