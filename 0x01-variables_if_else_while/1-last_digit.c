#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * Entry Point: Main
 * Does: Get the last digit of a number n then check if it is 0 or bigger than 5 or 6
 * Return: 0 success
*/

int main(void)
{
	int n,lastdigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	
	lastdigit = n % 10;

	if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if(lastdigit != 0 && lastdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	/* your code goes there */
	return (0);
}
