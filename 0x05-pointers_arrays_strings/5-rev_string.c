#include "main.h"
#include "string.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, k;

	j = 0;
	k = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k] = tmp;

		k -= 1;
	}
}
