#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name
 * @argc: argument counter
 * @argv: argument arrays
 * Return: 0 Always success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	exit(EXIT_SUCCESS);
}
