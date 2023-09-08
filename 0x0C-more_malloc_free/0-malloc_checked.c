#include "main.h"

/**
* malloc_checked - allocate memory.
* @b: the bite to rserve.
* Return: exit with 98.
*/

void *malloc_checked(unsigned int b)
{
	void *bite;

	bite = malloc(b);
	if (bite == NULL)
		exit(98);
	return (bite);
}
