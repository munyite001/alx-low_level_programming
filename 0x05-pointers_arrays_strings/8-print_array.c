#include "main.h"

/**
 * print_array - prints a given number of elements of an array
 * @a : array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(*(a + i));
		i += 1;
	}
}
