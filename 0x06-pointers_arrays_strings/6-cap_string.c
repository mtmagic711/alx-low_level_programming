#include "main.h"

/**
* cap_string - capitalizes all words.
* @str: the givin string.
* Return: a pointer on str.
*/

char *cap_string(char *str)
{
int i = 0;
int flag = 1;
while (*str + i)
{
	if (flag && *(str + i) >= 'a' && *(str + i) <= 'z')
	{
		*(str + i) = *(str + i) + 32;
	}
	flag = 0;
	if (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n' ||
		*(str + i) == ',' || *(str + i) == ';' || *(str + i) == '.' ||
		*(str + i) == '!' || *(str + i) == '?' || *(str + i) == '"' ||
		*(str + i) == '(' || *(str + i) == ')' || *(str + i) == '{' ||
		*(str + i) == '}')
	{
		flag = 1;
	}
}
return (str);
}
