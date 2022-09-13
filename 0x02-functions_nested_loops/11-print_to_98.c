#include <stdio.h>

/**
 * print_to_98 - print all natural numbers
 * Description: print all natural numbers from n to 98
 * @n: the first number n
 * Returns: nothing
 */

void print_to_98(int n)
{
	int i = n;
	int j;
	
	if (n < 98)
	{
		j = 1;
	}
	else if (n > 98)
	{
		j = -1;
	}
	else if (n == 98)
	{
		j == 0;
	}

	while (i <= 98)
	{
		i += j;
		if (i == 98)
		{
			printf("%d", i);
		}
		else 
		{
			printf("%d, ",i);
		}
	}
}
