#include "main.h"
#include <stdlib.h>
/**
* _strstr -  locates a substring.
* @haystack: where we're looking.
* @needle: what we're looking for.
* Return: a pointero the beginning of the located substring.
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

i = 0;
j = 0;
while (haystack[i])
{
	while (needle[j])
	{
		if (haystack[i + j] != needle[j])
			break;
		j++;
	}
	if (!needle[j])
		return (&haystack[i]);
	i++;
}
return (NULL);
}
