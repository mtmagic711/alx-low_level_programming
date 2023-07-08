#include "main.h"

/**
* _strncpy - copie a string.
* @dest: the one to copy to.
* @src: the one to copy from.
* @n: how many char to copy.
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;

while (*(src + i) != '\0' && i < n)
{
	*(dest + i) = *(src + i);
	i++;
}
for (; i < n; i++)
{
*(dest + i) = '\0';
}
return (dest);
}
