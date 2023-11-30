#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers  - prints all its arguments seperated by a seperator
 * @seperator: the seperator to be printed between the numbers
 * @n: Number of arguments passed to the function
 * @...: Unknown number of arguments passed to the function
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list num_args;

	va_start(num_args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num_args, int);
		printf("%d", x);
		if (seperator != NULL && i != n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
}
