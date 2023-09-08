#include "main.h"

/**
* _realloc - reallocates a memory block.
* @ptr: the pointer.
* @old_size: the old size.
* @new_size: the new size.
* Return: Always 0.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	while (i < old_size)
	{
		*((char *)(ptr) + i) = *(ptr1 + i);
		i++;
	}
	free(ptr);
	return (ptr1);
}
