#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: First value of the array
 *
 * @max: Last value of array
 *
 * Return: if min > max - NULL
 * if malloc fails, return NUL
 */

int *array_range(int min, int max)
{
	int *arr, i, n;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
