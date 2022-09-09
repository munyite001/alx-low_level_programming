#include <stdio.h>

/**
 * main - Print letters of the alphabet
 *
 * Description: print all letters of the alphabet apart from q,e
 * Return: 0 success
 */

int main(void)
{
	char n = 'a';
	int i;
	for (i = 0; i < 26; i++)
	{
		if (n == 'q' || n == 'e')
		{
			n+=1;
		}
		else
		{
			putchar(n);
			n+=1;
		}
	}
 	putchar('\n');
	return 0;
}
