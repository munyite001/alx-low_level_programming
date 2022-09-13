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

	if (n < 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}

			i += 1;
		}

	}
	else if (n > 98)
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
			i -= 1;
		}
	}
	else if (n == 98)
	{
		printf("%d\n", i);
	}
}
