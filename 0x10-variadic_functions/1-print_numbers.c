#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers -  prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: the number of arguments.
* @...: the arguments.
* Return: Always 0;
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	if (n == 0 && separator != NULL)
		printf("%s\n", separator);
	else if (n == 0 && separator == NULL)
		printf("\n");
		else
		{
			for (i = 0; i < n - 1; i++)
			{
			if (separator != NULL)
				printf("%d%s", va_arg(ptr, int), separator);
			else
				printf("%d", va_arg(ptr, int));
			}
			printf("%d\n", va_arg(ptr, int));
			va_end(ptr);
		}
}