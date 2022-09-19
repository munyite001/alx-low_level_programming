#include "main.h"
#include "string.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string
 * Return: nothing
 */

void rev_string(char *s)
{
	char str[] = "";
	int len;
	int i = 0;

	strcpy(str, s);
	len = strlen(str);

	while(len--)
	{
		*(s + i) = *(str + len);
		i += 1;
	}

}
