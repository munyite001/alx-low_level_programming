#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: the destination to append to
 * @src: the source to append from
 * Return: a pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*(dest + i) != '\0')
	{
		i += 1;
	}

	i = i + 1;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j += 1;
		i += 1;
	}
	*(dest + i) = '\0';

	return dest;

}
