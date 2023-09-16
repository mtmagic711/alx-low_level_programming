#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - a function that prints anything.
* @format: list of types of arguments passed.
* @...: the arguments.
* Return: Always 0.
*/

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *string;
	const char *str;
	int i = 0, i_val;
	float f_val;
	char charac;

	va_start(ptr, format);
	str = format;
	while (*(str + i) != '\0')
	{
		if (i != 0 && (*(str + i) == 'c' || *(str + i) == 'i'
		|| *(str + i) == 'f' || *(str + i) == 's'))
			printf(", ");
		if (*(str + i) == 'c')
		{
			charac = va_arg(ptr, int);
			printf("%c", charac);
		}
		else if (*(str + i) == 'i')
		{
			i_val = va_arg(ptr, int);
			printf("%d", i_val);
		}
			else if (*(str + i) == 'f')
			{
				f_val = va_arg(ptr, double);
				printf("%f", f_val);
			}
				else if (*(str + i) == 's')
				{
					string = va_arg(ptr, char *);
					printf("%s", string ? string : "(nil)");
				}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
