#include "main.h"
/**
* print_alphabet - print alphabet in lowercase
*
* Return: Always 0
*/
void print_alphabet(void)
{
char alph = 'a';

while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
