#include <stdio.h>
#include <stdlib.h>

/*
* main - Print alphabet lower and upper
*
* Return: Always 0
*/
int main(void)
{
char lettu, lettl;

for (lettl = 'a'; lettl <= 'z'; lettl++)
{
putchar(lettl);
}
for (lettu = 'A'; lettu <= 'Z'; lettu++)
{
putchar(lettu);
}
putchar('\n');
return (0);
}
