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
char *ptr;
ptr = src;

while (n > 0)
{
	*dest = *ptr;
	ptr++;
	dest++;
	n--;
}
return (dest);
}
