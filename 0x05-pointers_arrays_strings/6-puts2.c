#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of a string
 * @str: pointer to a string
 */

void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i <= len)
	{
		_putchar(*(str + i));
		i += 2;
	}
}
