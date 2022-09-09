#include <stdio.h>

/**
 *  * main - Print numbers
 * 
 * Description: print all single digit number from 0 t0 9
 * Return: 0 success
 */

int main(void)
{
	int i;
	int j = '0';
	for (i = 0; i < 10; i++)
	{
		putchar(j);
		j+=1;
	}
	putchar('\n');

	return 0;
}
