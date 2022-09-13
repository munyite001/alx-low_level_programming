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
	int k = 0;
	int l = 0;

	while (i < 3)
	{
		while (j < 4)
		{
			while (k < 6)
			{
				while (l < 10)
				{
					printf("%i%i:%i%i\n", i, j, k, l);
					l++;
				}
				l = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

