#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print all seconds of a day
 * Description: print all seconds of a day
 * starting from 00:00 to 23:59
 * Return: nothing
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		while (j < 60)
		{
			printf("%.2d:%.2d\n", i, j);
			j += 1;
		}
		j = 0;
		i += 1;
	}
}

