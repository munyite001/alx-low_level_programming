#include "main.h"

/**
 * print_last_digit - returns value of last digit
 *
 * Description: returns value of last digit of a number n
 *@n: the number
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;
	}

	_putchar(i + '0');

	return (i);
}
