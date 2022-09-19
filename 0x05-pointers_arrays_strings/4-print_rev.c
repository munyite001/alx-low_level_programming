#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i += 1;
	}

	while (i >= 0)
	{
		_putchar(*(s + i));
		i -= 1;
	}
	_putchar('\n');
}
