#include <stdio.h>
#include <stdlib.h>

/**
* main - Print reverse alphabet
*
* Return: Always 0
*/
int main(void)
{
char lett = 'z';

while (lett >= 'a')
{
putchar(lett);
lett-- ;
}
putchar('\n');
return (0);
}
