#include "main.h"

/**
 * print_alphabet_x10 - prints letters of alphabet
 * Description: prints letters of the alphabet
 * Returns: nothing
 */

void print_alphabet_x10(void)
{
	char n = 'a';
	int i = 0;
	int j = 0;
	
	while (j < 10)
	{
		while (i < 26)
		{
			_putchar(n);
			n += 1;
			i += 1;
		}
		j += 1;
		_putchar('\n');
	}
}
