#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its arguments
 * @n: Number of arguments passed to the function
 * @...: Unknown number of arguments passed to the function
 * Return: 0 if n is zero, else the total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int total = 0;
	va_list num_args;

	if (n == 0)
	{
		return (0);
	}

	va_start(num_args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num_args, int);
		total += x;
	}

	return (total);
}
