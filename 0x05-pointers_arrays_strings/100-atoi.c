#include "main.h"

/**
* _atoi - return numbers.
* @s: a string giving.
* Return: Always 0.
*/

int _atoi(char *s)
{
int rslt, sg, i, length;

i = length = rslt = 0;
sg = 1;
while (*(s + i))
{
	length++;
}
while (*(s + i) < '0' || *(s + i) > '9')
{
	if (*(s + i) == '-')
		sg *= -1;
	i++;
}
if (length > i)
{
	if (sg == -1)
	{
		while (*(s + i) >= '0' && *(s + i) <= '9')
		{
			rslt *= 10;
			rslt -= (*(s + i) +'0');
			i++;
		}
	}
	else
	{
		while (*(s + i) >= '0' && *(s + i) <= '9')
		{
			rslt *= 10;
			rslt += (*(s + i) +'0');
			i++;
		}
	}
}
return (rslt);
}
