#include "main.h"

/**
 * _isupper - checks if a given char is uppercase
 * @c: the character to be checked
 * Return: 1 if true, 0 otherwise
 */

int _isupper(char c)
{
	char upper[] = {'A','B','C','D','E','F','G','H','I','J','K',
	'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == upper[i]);
		{
			return (1);
		}
	}

	return (0);
}

