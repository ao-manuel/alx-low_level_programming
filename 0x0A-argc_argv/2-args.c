#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the arguments it receives
 *
 * @argc: counts argument
 * @argv: arguments received
 *
 * Return: Exits success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
