#include <stdio.h>


/**
 * Entry Point: Main
 * Operation: Print lowercase and uppercase letters of the alphabet
 * Return: 0 Success
*/

int main(void)
{
	char n = 'a';
	char x = 'A';

       	for (int i = 0; i < 26; i++)
	{
		putchar(n);
		n += 1;
	}
	for(int y = 0; y < 26; y++)
	{
		putchar(x);
		x += 1;
	}
	
	putchar('\n');

	return 0;
}
