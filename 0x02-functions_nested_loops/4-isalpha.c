#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks whether a character is alphabet
 * Description: checks if a given character is alphabet
 *@c: the letter to be checked
 * Return: 1 if alphabet. 0 otherwise
 */

int _isalpha(char c)
{
	int i = isalpha(c);

	if (i != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
