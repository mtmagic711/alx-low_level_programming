#include "main.h"

/**
* rev_string - print a string in reverse.
* @s: the giving string.
* Return: Always 0;
*/

void rev_string(char *s)
{
int i, j, l;
char temp;
i = 0;
l = 0;
while (*(s + l))
{
	l++;
}
j = l - 1;
while (i < l / 2)
{
	temp = *(s + i);
	*(s + i) = *(s + j);
	*(s + j) = temp;
	j--;
	i++;
}
}
