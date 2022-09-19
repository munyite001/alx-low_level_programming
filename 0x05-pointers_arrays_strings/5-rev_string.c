#include "main.h"
#include "string.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len, i = 0;
	char str[] = "";


	while (*(s + len) != '\0')
	{
		*(str + len) = *(s + len);
		len += 1;
	}

	while (len--)
	{
		*(s + i) = *(str + len);
		i += 1;
	}
}
