#include "main.h"
#include <stdio.h>

/**
* main - prints the program name.
* @argc: the number of arguments.
* @argv: the array of arguments.
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
return (0);
}
