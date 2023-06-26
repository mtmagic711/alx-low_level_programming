#include "main.h"

/**
* swap_int - swap the value of two numbers.
* @a: the first integer.
* @b: the second int.
* Return: always 0.
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
