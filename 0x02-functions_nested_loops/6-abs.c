#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * Description: prints the absolute value of a number
 *@n: the number to be checked
 * Return: the absolute number
 */

int _abs(int n)
{
	int flag;

	if (n >= 0)
	{
		flag = n;
	}
	else if (n < 0)
	{
		flag = n * -1;
	}
	return (flag);
}
