#include "main.h"

/**
* print_alphabet_x10 - alphabet 10 times
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
int i = 0;
char alph = 'a';

while (i < 10)
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
i++;
alph = 'a';
_putchar('\n');
}
}
