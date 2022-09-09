#include <stdio.h>



/**
 * main -  print alphabets in reverse
 * Description: Print lowercase letters of the alphabet in reverse
 * Return: 0 Success
*/

int main(void)
{
	char n = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(n);
		n -= 1;
	}
	putchar('\n');

	return (0);
}
