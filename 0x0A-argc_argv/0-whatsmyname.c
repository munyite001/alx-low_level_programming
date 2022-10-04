#include "main.h"

/**
 * main - print the program name
 * @argc: number of command line arguments
 * @argv: array of strings representing the arguments
 * Return: Success 0
 */

int main(int argc, char *argv[])
{
	char *name = argv[0];
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
