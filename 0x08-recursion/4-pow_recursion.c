#include "main.h"

/**
* _pow_recursion - power of a number.
* @x: The number.
* @y: The power.
* Return: Always 0;
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y < 1)
	return (1);
	else
		return (x * _pow_recursion(x,y - 1));
}
