#include "main.h"

/**
 * _strlen - returns the length of a string
 * s: a pointer to a string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	char str[];
	int i,counter = 0;

	str = *s;
	while (str[i] != '\0')
	{
		i += 1;
		counter += 1;

	}

	return (counter);
}
