#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print all seconds of a day
 * Description: print all seconds of a day 
 * starting from 00:00 to 23:59
 * Return: nothing
 */

void jack_bauer(void)
{i
	int i, j, k, l = 0;

	while (i < 3)
	{
		while (j < 4)
		{
			while (k < 6)
			{
				while ( l < 10)
				{
					printf("%i%i:%i%i\n", i, j, k, l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

