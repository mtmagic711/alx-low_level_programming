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
char *p1 = haystack;
char *p2 = needle;

for (; *haystack != '\0'; haystack++)
{
	while (*p1 == *p2 && *p2 != '\0')
	{
		p1++;
		p2++;
	}
	if (*p2 == '\0')
		return (haystack);
}
return (NULL);
}
