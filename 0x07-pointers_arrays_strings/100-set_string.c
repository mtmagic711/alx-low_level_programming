#include "main.h"

/**
* set_string - sets the value of a pointer to a char.
* @s: the first.
* @to: the second.
* Return: always 0.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
