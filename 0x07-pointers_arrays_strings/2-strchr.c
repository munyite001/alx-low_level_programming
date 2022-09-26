#include "main.h"

/**
 * _strchr - Locates a character in  astring
 * @s: the string to be searched
 * @c: the character to be located
 * Return: if c is found, a pointer to the first occurance of c else
 * Null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
