#include "main.h"
#include <ctype.h>
/**
 * _islower - checks whether a character is lowercase
 * Description: checks if a given character is lowercase
 * 
 * Returns: 1 if lowercase 0 otherwise
 */

int _islower(char c)
{
	int i = islower(c);

	if (i == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
