#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print digits 0 through 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
