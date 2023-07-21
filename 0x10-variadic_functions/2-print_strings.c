#include "variadic_functions.h"

/**
 * print_strings - prints string.
 * @separator: the seperator between strings.
 * @n: the numbers of parameters.
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *string;

va_start(ap, n);

for (i = 0; i < n; i++)
{
	string = va_arg(ap, char*);
	printf("%s", string ? string : "(nil)");
	if (i < n - 1)
		printf("%s", separator ? separator : "");
}
va_end(ap);
printf("\n");
}
