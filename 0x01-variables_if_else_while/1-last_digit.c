#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main- Get the last digit of a number
 *
 * Description: using the main function, this program
 * prints if the digit is positive 0 or negative
 * Return: 0 success
*/

int main(void)
{
	int n, ld;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld != 0 && ld < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	/* your code goes there */
	return (0);
}
