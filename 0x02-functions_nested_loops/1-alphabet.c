#include "main.h"

/**
 * print_alphabet - prints letters of alphabet
 * Description: prints letters of the alphabet
 * Returns: nothing
 */

void print_alphabet(void)
{
	char n = 'a';
	int i = 0;

	while (i < 26)
	{
		_putchar(n);
		n += 1;
		i += 1;
	}

	_putchar('\n');
}

/**
 * main - calls the print_alphabet function
 * Description: calls the print_alphabet function
 * to print all the letters of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
