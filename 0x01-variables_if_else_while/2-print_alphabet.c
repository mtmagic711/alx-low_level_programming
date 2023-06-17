#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the alphabet
*
* Return: Always 0
*/
int main(void)
{
char lett;

for (lett = 'a'; lett <= 'z'; lett ++)
{
putchar(lett);
}
putchar('\n');
	return (0);
}
