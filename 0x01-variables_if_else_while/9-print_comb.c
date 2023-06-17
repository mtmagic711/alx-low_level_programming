#include <stdio.h>
#include <stdlib.h>

/**
* main - Print combinations
*
* Return: Always 0
*/
int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
if (i == 57)
{
break;
}
putchar(',');
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
