#include "main.h"

/**
* leet - convert to 1337.
* @str: a giving string.
* Return: a pointer to str.
*/

char *leet(char *str)
{
int i, j;
char leet[11] = "aAeEoOtTlL";
char convert[] = "4433007711";

while (*(str + i))
{
	for (j = 0; j <= 9; j++)
	{
		if (leet[j] == *(str + i))
			*(str + i) = convert[j];
	}
	i++;
}
return (str);
}
