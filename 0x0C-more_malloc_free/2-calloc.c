#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: size of each element
 *
 * Return: NULL if fails, else pointer to allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	n = malloc(size * nmemb);

	if (n == NULL)
	{
		return (NULL);
	}

	p = n;

	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = '\0';
	}

	return (n);
}
