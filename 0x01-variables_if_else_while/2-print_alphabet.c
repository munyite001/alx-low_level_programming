#include <stdio.h>



/**
 * main - print lowercase letters of alphabet
 * Description: Print lowercase letters of the alphabet
 * Return: 0 Success
*/

int main(void)
{
	char n = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');

	return (0);
}
