#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory.
* @b: the number to allocates.
* Return: Always 0.
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}
