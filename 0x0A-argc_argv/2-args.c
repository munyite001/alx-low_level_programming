#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of strings representing the arguments
 * Return: Success 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
