#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i += 1;

	}

	return (i);
}
