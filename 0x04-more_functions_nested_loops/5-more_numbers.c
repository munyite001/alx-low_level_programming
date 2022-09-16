#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times nmbers 0 through 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar(10);
	}
}
