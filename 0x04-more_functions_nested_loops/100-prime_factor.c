#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - the largest primary number.
*
* Return: Always 0.
*/

int main(void)
{
long int n;
long i;
long larg_fac = -1;

n = 612852475143;
while (i < n / 2)
{
while (n % 2 == 0)
{
larg_fac = 2;
n = n / 2;
}
for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
larg_fac = i;
n /= i;
}
}
if (n > 2)
larg_fac = n;
}
printf("%ld\n", larg_fac);
return (0);
}

