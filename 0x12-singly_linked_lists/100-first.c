#include "lists.h"
#include <stdio.h>

void print_before(void) __attribute__ ((constructor));

/**
* print_before - print a sentence.
*
* Return: Always 0.
*/

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
