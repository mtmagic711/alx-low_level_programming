#include <stdio.h>
#include <stdlib.h>

/**
* main - alphabet without q and e
*
* Return: Always 0
*/
int main(void)
{
char lett = 'a';

while (lett <= 'z')
{
if (lett != 'e' && lett != 'q')
{
putchar(lett);
}
lett++;
}
putchar('\n');
return (0);
}
