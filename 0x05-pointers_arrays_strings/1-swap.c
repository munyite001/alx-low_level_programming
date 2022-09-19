#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first pointer
 * @b: the second pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x,y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
