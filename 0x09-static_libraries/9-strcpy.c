#include "main.h"

/**
* *_strcpy - copy from one to another.
* @dest: the one to cpy to.
* @src: the one to cpy from.
* Return: Always 0.
*/

char *_strcpy(char *dest, char *src)
{
int i = 0, j;
j = 0;
while (*(src + i))
{
	*(dest + j) = *(src + i);
	i++;
	j++;
}
*(dest + i) = '\0';
return (dest);
}
