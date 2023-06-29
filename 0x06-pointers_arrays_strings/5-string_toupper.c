#include "main.h"

/**
* string_toupper - change lowercase to uppercase.
* @str: the given string.
* Return: Always 0.
*/

char *string_toupper(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
	if (*(str + i) >= 'a' && *(str + i) <= 'z')
	{
		*(str + i) = *(str + i) - 'a' + 'A';
	}
	i++;
}
return (str);
}
