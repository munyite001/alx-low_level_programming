#include <stdio.h>



/**
 * Main: print all hexadecimal symbls
 * Description: Print all base 16 numbers
 * Return: 0 Success
*/

int main(void)
{
	char n = '0';
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i == 10)
		{
			n = 'a';
		}
		putchar(n);
		n+=1;
	}
	putchar('\n');

	return 0;
}
