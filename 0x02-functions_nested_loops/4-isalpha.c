#include "main.h"

/**
* _isalpha - Determine if it is an alphabet.
* @c: the entry of the function,
* Return: 1 if the entry is an alphabet, 0 therwise.
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
else
	return (0);
}
