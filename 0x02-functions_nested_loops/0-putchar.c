#include <string.h>

/**
 * main - prints "_putchar" to the screen
 * Description: a simple program that prints
 * the text "_putchar" to the standard output
 * followed by a new line
 *
 * Return: (0) success
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;
	int j = strlen(str);

	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
