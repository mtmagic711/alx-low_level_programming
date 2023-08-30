#include "main.h"

/**
* is_prime_number - if number is prime or not.
* @n: the number giving.
* Return: return 1 or 0.
*/
int is_prime_number(int n);
int is_prime(int n, int div);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n <= 3)
		return (1);
	return (is_prime(n, 2));
}

/**
* is_prime - check the number if it is prime.
* @n: the number.
* @div: the divisor.
* Return: 0 or 1.
*/

int is_prime(int n, int div)
{
	if (div * div > n)
		return (1);
	else if (n % div == 0)
		return (0);
	return (is_prime(n, div + 2));
}
