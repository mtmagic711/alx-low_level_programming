#include "main.h"

/**
* _memcpy - copies memory area.
* @dest: the one to copy in.
* @src: the one to copy from.
* @n: the number of cases to copy.
* Return: a pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

while (n > 0)
{
	dest[i] = src[i];
	i++;
	n--;
}
return (dest);
}
