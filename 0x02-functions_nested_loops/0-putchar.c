#include "main.h"

/**
* main - Printf puchar
*
* Return: always 0
*/
int main(void)
{
char *tab = "_putchar";

while (*tab)
{
   
 _putchar(*tab);
    tab++;
}
_putchar('\n');
return (0);
}
