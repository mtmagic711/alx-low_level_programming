#include "main.h"

/**
* factorial - the factorial of a given number.
* @n: the given number.
* Return: the results.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n-1));
}
