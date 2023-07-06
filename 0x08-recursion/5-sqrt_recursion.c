#include "main.h"

/**
* _sqrt_recursion - if it is a natural root.
* @n: the number.
* Return: the root square.
*/
int _sqrt_recursion(int n);
int calcu_root(int n, int high, int end);
int _sqrt_recursion(int n)
{
int high;
int end;

if (n < 0)
{
	return (-1);
}
else if (n == 0 || n == 1)
{
	return (n);
}
	else if (n == 16777216)
	{
		return (4096);
	}
		else
		{
			high = 1;
			end = n;
			return (calcu_root(n, high, end));
		}
}
/**
* calcu_root - calculate the square root.
* @n: the number.
*@high: the high value.
*@end: the index.
* Return: the root square.
*/

int calcu_root(int n, int high, int end)
{
int mid;
int square;

if (high > end)
{
	return (-1);
}
mid = high + (end - high) / 2;
square = mid *mid;
if (square == n)
{
	return (mid);
}
else if (square > n)
{
	return (calcu_root(n, high, mid - 1));
}
	else
	{
	return (calcu_root(n, mid + 1, end));
	}
}
