#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers and print results
 * @argc: number of command line arguments
 * @argv: array of strings representing the arguments
 * Return: Success 0, 1 Failure
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
