#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: Maximum number of bytes of string s2 to concatenate to string s1
 *
 * Return: NULL - if failed
 * else a pointer to the newly allocated space in memory
 * which contains s1 followed by the first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int x = n, i;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		x++;
	}

	concat_str = malloc(sizeof(char) * (x + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	x = 0;

	for (i = 0; s1[i]; i++)
	{
		concat_str[x++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		concat_str[x++] = s2[i];
	}

	concat[x] = '\0';

	return (concat_str);

}
