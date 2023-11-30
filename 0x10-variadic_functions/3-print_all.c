#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all arguments
 * @format: format specifier for the arguments
 * @...: unknown number of arguments
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char c;
	int num;
	float f;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args,  char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", str);
		}

		printf(", ");
		i++;
	}
	printf("\n");
}
