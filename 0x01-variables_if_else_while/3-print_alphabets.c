#include <stdio.h>


/**
 * main - print lowercase and uppercase alphabets
 * Description: Print lowercase and uppercase letters of the alphabet
 * Return: 0 Success
*/

int main(void)
{
	char n = 'a';
	char x = 'A';
	int i, y = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(n);
		n += 1;
	}
	for (y = 0; y < 26; y++)
	{
		putchar(x);
		x += 1;
	}
	putchar('\n');

	return (0);
}
