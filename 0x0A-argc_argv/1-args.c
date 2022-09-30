#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of Arguments passed into it
 *
 * @argc: counts argument received
 * @argv: Arguments
 * Return: Exit code (success)
 */

int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", (argc - 1));

	exit(EXIT_SUCCESS);
}
