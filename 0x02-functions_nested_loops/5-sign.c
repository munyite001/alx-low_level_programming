#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Description: prints the sign of a given number n
 *@n: the number to be checked
 * Return: 1 if greater than 0 , 0 if 0 -1
 * if less than 0
 */

int print_sign(int n)
{
	int flag;

	if (n > 0)
	{
		_putchar('+');
		flag = 1;
	}
	else if (n == 0)
	{
		_putchar(0);
		flag = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		flag = -1;
	}

	return (flag);
}
