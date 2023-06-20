#include "main.h"

 /**
* _islower - to verify a character is lower or not.
* @c: the value that the fonction
* Return: 0 or 1
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
