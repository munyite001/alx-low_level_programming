#include "main.h"
#include "string.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */

void rev_string(char *s)
{
	char *str;
	int i, j = 0;

	while (*(s + i) != '\0')
	{
		*(str + i) = *(s + i);
		i += 1;
	}

	while (i--)
	{
		*(s + j) = *(str + i);
		j += 1;
	}

}
