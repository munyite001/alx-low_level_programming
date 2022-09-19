#include "main.h"

/**
 * puts_half - prints half of a string;
 * @str: the pointer to the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (*(str + i) != '\0')
	{
		i += 1;
	}

	if (i % 2 != 0)
	{
		n = ((i - 1) / 2) - 1;
	}
	else
	{
		n = i / 2;
	}

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n += 1;
	}
	_putchar('\n');

}
