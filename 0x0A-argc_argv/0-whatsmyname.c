#include "main.h"
#include <stdio.h>

/**
 * main - print the program name
 * @argc: number of command line arguments
 * @argv: array of strings representing the arguments
 * Return: Success 0
 */

int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
