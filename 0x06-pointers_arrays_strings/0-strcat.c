#include "main.h"

/**
* *_strcat - append a string to another.
* @dest: the string to append to.
* @src: the string to add.
* Return: A pointer to dest.
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (*(dest + i) != '\0')
{
	i++;
}
i++;
while (*(src + j))
{
	*(dest + i) = *(src + j);
	i++;
	j++;
}
*(dest + i) = '\0';
return (dest);
}
