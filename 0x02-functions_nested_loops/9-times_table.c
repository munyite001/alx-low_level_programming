#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9 times table
 * Description: prints the nines times table from
 * 0 all the way to 9
 * Returns: nothing
 */

void times_table(void)
{
	int i, j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			int result = i * j;

			if (j == 9)
			{
				printf("%d\n", result);
			}
			else
			{
				if (result > 9)
				{
					printf("%d, ", result);
				}
				else
				{
					printf("%d,  ", result);
				}
			}

			j += 1;
		}
		j = 0;
		i += 1;
	}
}
