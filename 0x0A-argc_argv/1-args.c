#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 *
 * @argc: number of command line arguments
 * @argv: array of strings representing the arguments
 * Return: Success 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
