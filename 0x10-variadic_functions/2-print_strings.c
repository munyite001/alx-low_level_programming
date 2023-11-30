#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @seperator: seperates the strings
 * @n: number of arguments passed to the function
 * @...: unknown number of arguments
 * Returns: nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_args;

	va_start(str_args, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(str_args, char *);

		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}

		if (seperator != NULL && i != n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
}
