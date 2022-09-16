#include "main.h"

/**
 * _isupper - checks if a given char is uppercase
 * @c: the character to be checked
 * Return: 1 if true, 0 otherwise
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

