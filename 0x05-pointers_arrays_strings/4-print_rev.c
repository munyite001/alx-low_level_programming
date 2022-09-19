#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to a string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i += 1;
	}

	j = i;

	while (*(s + j) != *(s + 0))
	{
		_putchar(*(s + j));
		j -= 1;
	}
	_putchar('\n');
}
