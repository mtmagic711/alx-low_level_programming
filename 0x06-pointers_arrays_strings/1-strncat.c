#include "main.h"

/**
* _strncat - the same as the one before.
* @dest: the one to append .
* @src: the one to append.
* @n: number of char to append.
* Return: the string in dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
j = 0;
i = 0;

while (*(dest + i) != '\0')
{
i++;
}
*(dest + i) = ' ';
while (*(src + j) &&j < n)
{
*(dest + i) = *(src + j);
i++;
j++;
}
*(dest + i) = '\0';
return (dest);
}
