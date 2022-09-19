#include "main.h"

/**
 * _puts - prints a string folowed by a new line
 * @str: a pointer to a string
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 1;
	}
	_putchar('\n');
}
