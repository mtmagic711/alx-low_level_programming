#include "main.h"

/**
* _memset -  fills memory with a constant byte.
* @s: pointer to the memory area.
* @b: the constant byte.
* @n: the number of byte to fill.
* Return: the pointer to s.
*/

char *_memset(char *s, char b, unsigned int n)
{
char *pt;
ptr = s;

while (n > 0)
{
	*pt = b;
	pt++;
	n--;
}
return (s);
}
