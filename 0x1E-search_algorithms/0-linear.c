#include "search_algos.h"
/**
 * linear_search - function that searches an array
 * using the linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value:  the element we are searching for
 * Return: first index where value is located
 * if value not present or array is NULL return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
